#include "Pokemon.h"

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

    //Held item - not implemented yet

    //EVS
    HPEV = JSONMon.at("EVs").value("HP", 0);
    ATKEV = JSONMon.at("EVs").value("ATK", 0);
    DEFEV = JSONMon.at("EVs").value("DEF", 0);
    SPAEV = JSONMon.at("EVs").value("SPA", 0);
    SPDEV = JSONMon.at("EVs").value("SPD", 0);
    SPEEV = JSONMon.at("EVs").value("SPE", 0);

    //IVs
    HPIV = JSONMon.at("IVs").value("HP", 31);
    ATKIV = JSONMon.at("IVs").value("ATK", 31);
    DEFIV = JSONMon.at("IVs").value("DEF", 31);
    SPAIV = JSONMon.at("IVs").value("SPA", 31);
    SPDIV = JSONMon.at("IVs").value("SPD", 31);
    SPEIV = JSONMon.at("IVs").value("SPE", 31);

    //Nature - takes the string value, converts it to the nature ENUM.
    nature = stringToNatureEnum(JSONMon.at("nature"));

    //Gender
    gender = stringToGenderEnum(JSONMon.value("gender", "N"));

    //XP
    xp = JSONMon.value("xp", 0);

    //Shiny
    shiny = JSONMon.value("shiny", false);

    //Status - not implemented yet

    //Damage Taken - not implemented yet

    //Moves - not implemented yet
}

Pokemon::~Pokemon()
{

}