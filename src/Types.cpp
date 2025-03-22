#include "Types.h"

Type stringToType(std::string stringType)
{
    return typesMap.at(stringType);
}