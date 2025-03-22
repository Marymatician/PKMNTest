#include "Abilities.h"

AbilityEnum stringToAbilityEnum(std::string stringEnum)
{
    return stringAbilityConvert.at(stringEnum);
}