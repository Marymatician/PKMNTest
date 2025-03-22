#ifndef Abilities_H
#define Abilities_H

#include <map>
#include <string>

//An enum of the different abilities a mon could have.
enum class AbilityEnum
{
    ABILITY_1,
    ABILITY_2,
    HIDDEN_ABILITY
};

//a map of enums to strings, to simplify my conversion of the ability dict.
const std::map <std::string, AbilityEnum> stringAbilityConvert = {
    {"0", AbilityEnum::ABILITY_1},
    {"1", AbilityEnum::ABILITY_2},
    {"H", AbilityEnum::HIDDEN_ABILITY}
};

//takes a string of "0", "1", or "H", and returns the corresponding AbilityEnum value.
AbilityEnum stringToAbilityEnum(std::string stringEnum);

#endif