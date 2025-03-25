#include "Nature.h"

Nature stringToNatureEnum(std::string stringNature)
{
    return stringToNatureMap.at(stringNature);
}

std::pair <Stats, Stats> natureStats(Nature inputNature)
{
    return natureStatsMap.at(inputNature);
}