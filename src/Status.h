#ifndef Status_H
#define Status_H

#include <string>
#include <map>

enum class Status {
    NONE,
    BURN,
    FREEZE,
    PARALYSIS,
    POISON,
    BAD_POISON,
    SLEEP,
    FAINTED
};

const std::map <std::string, Status> stringToStatusEnumMap = {
    {"None", Status::NONE},
    {"Burn", Status::BURN},
    {"Freeze", Status::FREEZE},
    {"Paralysis", Status::PARALYSIS},
    {"Poison", Status::POISON},
    {"Badly Poisoned", Status::BAD_POISON},
    {"Sleep", Status::SLEEP},
    {"Fainted", Status::FAINTED}
};

Status stringToStatusEnum(std::string statusString);

#endif