#include "Species.h"

Species::Species() {}

Species::Species(nlohmann::json dexInfo)
{
    name = dexInfo.at("name");
    dexNum = dexInfo.at("dexNum");

    // A for loop goes over the typeline, converting them to enums and adding them to the typeline.
    for (std::string dexInfoType: dexInfo.at("types")) {
        typeline.push_back(stringToType(dexInfoType));
    }
     
    //base stats
    for (auto const& [key, val] : enumToStatStringMap) {
        statline.push_back(dexInfo.at("baseStats")[val]);
    }

    //For each ability in the line of abilities
    for (auto i = dexInfo.at("abilities").begin(); i != dexInfo.at("abilities").end(); ++i) {
        //add a line to our ability list, a map with a key of ability_enum and a value of, currently, a string.
        abilityList[stringToAbilityEnum(i.key())] = i.value();
    }

    //gender ratio
    genderRatio = dexInfo.value("genderRatio", 0.5);
    //height
    height = dexInfo.at("height");
    //weight
    weight = dexInfo.at("weight");

    //For each egg group, converts it to an enum and then stores it.
    for (std::string dexInfoEggGroup: dexInfo.at("eggGroups")) {
        eggGroups.push_back(stringToGroup(dexInfoEggGroup));
    }
}

Species::~Species()
{

}

std::vector <int> Species::returnStats()
{
    return statline;
}