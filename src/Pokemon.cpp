#include "Pokemon.h"

#include <cmath>

Pokemon::Pokemon(nlohmann::json JSONMon)
{
    //finds the singleton Pokedex, and asks the Pokedex to fetch all the species stats for the species of the given JSON file.
    PokeDex& referenceDex = PokeDex::getPokeDex();
    species = Species(referenceDex.fetchSpecies(JSONMon.at("species")));

    //Nickname
    nickname = JSONMon.value("nickname", JSONMon.at("species"));

    //Level
    level = JSONMon.at("level");

    //Ability - takes the string value and converts it to an ENUM.
    ability = stringToAbilityEnum(JSONMon.at("ability"));

    //EVS
    //for each line of the enumToStatStringMap
    for (auto const& [key, val] : enumToStatStringMap) {
        //Add to the ev vector, the value of JSONMon's EV corresponding to the stat string, or 0 if it doesn't exist
        EVs.push_back(JSONMon.at("EVs").value(val, 0));
    }

    //IVs
    for (auto const& [key, val] : enumToStatStringMap) {
        IVs.push_back(JSONMon.at("IVs").value(val, 31));
    }

    //Nature - takes the string value, converts it to the nature ENUM.
    nature = stringToNatureEnum(JSONMon.at("nature"));

    //Gender
    gender = stringToGenderEnum(JSONMon.value("gender", "N"));

    //XP
    xp = JSONMon.value("xp", 0);

    //Shiny
    shiny = JSONMon.value("shiny", false);

    //Status
    status = stringToStatusEnum(JSONMon.value("status", "None"));

    //Held item - not implemented yet

    //Damage Taken - not implemented yet

    //Moves - not implemented yet
    for (std::string moveString : JSONMon.at("moves"))
    {
        moveSet.push_back(Move(moveString));
    }
}

Pokemon::Pokemon()
{

}

Pokemon::~Pokemon()
{

}

int Pokemon::deriveStat(Stats statEnum)
{
    int intEnum = static_cast<int>(statEnum);

    int returnValue = floor(((2*(species.returnStats()[intEnum])) + IVs[intEnum] + floor(EVs[intEnum] / 4)) * level / 100);
    if (intEnum == 0) {
        returnValue = returnValue + level + 10;
    } else {
        returnValue = returnValue + 5;

        std::pair naturePair = natureStats(nature);
        float natureModifier = 1;
        if (naturePair.first == statEnum) {
            natureModifier = natureModifier + 0.1;
        }
        if (naturePair.second == statEnum) {
            natureModifier = natureModifier - 0.1;
        }

        returnValue = floor(returnValue * natureModifier);
    }
    return returnValue;
}

std::vector <int> Pokemon::getStatline()
{
    std::vector<int> returnVector;

    for (auto const& [key, val] : enumToStatStringMap) {
        returnVector.push_back(deriveStat(key));
    }

    return returnVector;
}

Status Pokemon::getStatus()
{
    return status;
}