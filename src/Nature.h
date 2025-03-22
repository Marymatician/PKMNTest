#ifndef Nature_H
#define Nature_H

#include <map>
#include <string>

//an enum list of all the natures
enum class Nature
{
    ADAMANT,
    BASHFUL,
    BOLD,
    BRAVE,
    CALM,
    CAREFUL,
    DOCILE,
    GENTLE,
    HARDY,
    HASTY,
    IMPISH,
    JOLLY,
    LAX,
    LONELY,
    MILD,
    MODEST,
    NAIVE,
    NAUGHTY,
    QUIET,
    QUIRKY,
    RASH,
    RELAXED,
    SASSY,
    SERIOUS,
    TIMID
};

const std::map <std::string, Nature> stringToNatureMap = {
    {"Adamant", Nature::ADAMANT},
    {"Bashful", Nature::BASHFUL},
    {"Bold", Nature::BOLD},
    {"Brave", Nature::BRAVE},
    {"Calm", Nature::CALM},
    {"Careful", Nature::CAREFUL},
    {"Docile", Nature::DOCILE},
    {"Gentle", Nature::GENTLE},
    {"Hardy", Nature::HARDY},
    {"Hasty", Nature::HASTY},
    {"Impish", Nature::IMPISH},
    {"Jolly", Nature::JOLLY},
    {"Lax", Nature::LAX},
    {"Lonely", Nature::LONELY},
    {"Mild", Nature::MILD},
    {"Modest", Nature::MODEST},
    {"Naive", Nature::NAIVE},
    {"Naughty", Nature::NAUGHTY},
    {"Quiet", Nature::QUIET},
    {"Quirky", Nature::QUIRKY},
    {"Rash", Nature::RASH},
    {"Relaxed", Nature::RELAXED},
    {"Sassy", Nature::SASSY},
    {"Serious", Nature::SERIOUS},
    {"Timid", Nature::TIMID},
};

Nature stringToNatureEnum(std::string stringNature);

#endif