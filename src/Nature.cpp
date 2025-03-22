#include "Nature.h"

Nature stringToNatureEnum(std::string stringNature)
{
    return stringToNatureMap.at(stringNature);
}