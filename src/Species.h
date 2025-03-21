#ifndef Species_H
#define Species_H

#include <string>
#include <vector>
#include <map>
#include <nlohmann/json.hpp>
#include "PokeDex.h"

class Species
{
    public:
    Species();
    Species(nlohmann::json dexInfo);

    ~Species();

    private:
    //The name of the species, represented as a string. Maybe this could be an Enum? For now, a string is fine.
    std::string name;
    //The pokedex number of the species. Potentially helpful later if this becomes a full game. Useless now.
    int dexNum;

    //the typeline of the species.
    enum class Type
    {
        NORMAL,
        FIGHTING,
        FLYING,
        POISON,
        GROUND,
        ROCK,
        BUG,
        GHOST,
        STEEL,
        FIRE,
        WATER,
        GRASS,
        ELECTRIC,
        PSYCHIC,
        ICE,
        DRAGON,
        DARK,
        FAIRY,
        NONE
    };
    //A map that maps string versions of types to their enumerated versions.
    std::map <std::string, Type> typesMap = {
        {"Normal", Type::NORMAL},
        {"Fighting", Type::FIGHTING},
        {"Flying", Type::FLYING},
        {"Poison", Type::POISON},
        {"Ground", Type::GROUND},
        {"Rock", Type::ROCK},
        {"Bug", Type::BUG},
        {"Ghost", Type::GHOST},
        {"Steel", Type::STEEL},
        {"Fire", Type::FIRE},
        {"Water", Type::WATER},
        {"Grass", Type::GRASS},
        {"Electric", Type::ELECTRIC},
        {"Psychic", Type::PSYCHIC},
        {"Ice", Type::ICE},
        {"Dragon", Type::DRAGON},
        {"Dark", Type::DARK},
        {"Fairy", Type::FAIRY},
        {"None",  Type::NONE}
    };

    //The vector, setup to hold type enums, that will contain the types of the Pokemon.
    std::vector <Type> typeline;

    //The base stats of the species.
    int HP;
    int ATK;
    int DEF;
    int SPA;
    int SPD;
    int SPE;

    //current solution to ability storing
    enum class AbilityEnum
    {
        ABILITY_1,
        ABILITY_2,
        HIDDEN_ABILITY
    };

    //a map of enums to strings, to simplify my conversion of the ability dict.
    std::map <AbilityEnum, std::string> abilityStringConvert = {
        {AbilityEnum::ABILITY_1, "0"},
        {AbilityEnum::ABILITY_2, "1"},
        {AbilityEnum::HIDDEN_ABILITY, "H"}
    };

    std::map <AbilityEnum, std::string> abilityList;

    //gender ratio
    float genderRatio;
    //The species height, stored as a float.
    float height;
    //the species weight, stored as a float.
    float weight;

    //egg groups
    enum class EggGroupsEnum
    {
        MINERAL,
        AMORPHOUS,
        GRASS,
        WATER_3,
        WATER_2,
        WATER_1,
        BUG,
        DRAGON,
        FLYING,
        FIELD,
        HUMAN_LIKE,
        FAIRY,
        MONSTER,
        DITTO,
        NONE
    };
    //A map that maps string versions of types to their enumerated versions.
    std::map <std::string, EggGroupsEnum> eggGroupsMap = {
        {"Mineral", EggGroupsEnum::MINERAL},
        {"Amorphous", EggGroupsEnum::AMORPHOUS},
        {"Grass", EggGroupsEnum::GRASS},
        {"Water 3", EggGroupsEnum::WATER_3},
        {"Water 2", EggGroupsEnum::WATER_2},
        {"Water 1", EggGroupsEnum::WATER_1},
        {"Bug", EggGroupsEnum::BUG},
        {"Dragon", EggGroupsEnum::DRAGON},
        {"Flying", EggGroupsEnum::FLYING},
        {"Field", EggGroupsEnum::FIELD},
        {"Human-like", EggGroupsEnum::HUMAN_LIKE},
        {"Fairy", EggGroupsEnum::FAIRY},
        {"Monster", EggGroupsEnum::MONSTER},
        {"Ditto", EggGroupsEnum::DITTO},
        {"None", EggGroupsEnum::NONE}
    };

    std::vector <EggGroupsEnum> eggGroups;
};

#endif