#ifndef Types_H
#define Types_H

#include <map>
#include <string>

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

const std::map <std::string, Type> typesMap = {
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

Type stringToType(std::string stringType);

#endif