#ifndef EggGroups_H
#define EggGroups_H

#include <map>
#include <string>

enum class EggGroupsEnum {
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
const std::map <std::string, EggGroupsEnum> eggGroupsMap = {
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

EggGroupsEnum stringToGroup(std::string eggString);

#endif