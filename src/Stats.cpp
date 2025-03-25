#include "Stats.h"

std::string enumToStatString(Stats statEnum)
{
    return enumToStatStringMap.at(statEnum);
}