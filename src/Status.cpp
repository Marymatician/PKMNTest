#include "Status.h"

Status stringToStatusEnum(std::string statusString)
{
    return stringToStatusEnumMap.at(statusString);
}