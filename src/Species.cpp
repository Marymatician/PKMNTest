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
    HP = dexInfo.at("baseStats")["HP"];
    ATK = dexInfo.at("baseStats")["ATK"];
    DEF = dexInfo.at("baseStats")["DEF"];
    SPA = dexInfo.at("baseStats")["SPA"];
    SPD = dexInfo.at("baseStats")["SPD"];
    SPE = dexInfo.at("baseStats")["SPE"];

    //For each ability in the line of abilities
    for (auto i = dexInfo.at("abilities").begin(); i != dexInfo.at("abilities").end(); ++i) {
        //add a line to our ability list, a map with a key of ability_enum and a value of, currently, a string.
        abilityList[stringToAbilityEnum(i.key())] = i.value();
    }

    //gender ratio
    genderRatio = dexInfo.at("genderRatio");
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