#include "EggGroups.h"

EggGroupsEnum stringToGroup(std::string eggString)
{
    return eggGroupsMap.at(eggString);
}