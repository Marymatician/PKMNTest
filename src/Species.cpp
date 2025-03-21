#include "Species.h"

Species::Species()
{

}

Species::Species(nlohmann::json dexInfo)
{
    name = dexInfo.at("name");
    dexNum = dexInfo.at("dexNum");

    // A for loop goes over the typeline, converting them to enums and adding them to the typeline.
    for (std::string dexInfoType: dexInfo.at("types")) {
        typeline.push_back(typesMap[dexInfoType]);
    }
     
    //base stats
    HP = dexInfo.at("baseStats")["HP"];
    ATK = dexInfo.at("baseStats")["ATK"];
    DEF = dexInfo.at("baseStats")["DEF"];
    SPA = dexInfo.at("baseStats")["SPA"];
    SPD = dexInfo.at("baseStats")["SPD"];
    SPE = dexInfo.at("baseStats")["SPE"];

    //For each line of ability string convert
    for (std::pair<AbilityEnum, std::string> i : abilityStringConvert) {
        //if the abilities line of the dex info contains [0/1/H]
        if (dexInfo.at("abilities").contains(std::get<1>(i))) {
            //Append an ability to our ability list, with an Enum key, and the ability value.
            abilityList[std::get<0>(i)] = dexInfo.at("abilities")[std::get<1>(i)];
        }
    }

    //gender ratio
    genderRatio = dexInfo.at("genderRatio");
    //height
    height = dexInfo.at("height");
    //weight
    weight = dexInfo.at("weight");

    //For each egg group, converts it to an enum and then stores it.
    for (std::string dexInfoEggGroup: dexInfo.at("eggGroups")) {
        eggGroups.push_back(eggGroupsMap[dexInfoEggGroup]);
    }
}

Species::~Species()
{

}