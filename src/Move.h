#ifndef Move_H
#define Move_H

#include <string>
#include <map>
#include "Types.h"

enum class MoveCategory {
    PHYSICAL,
    SPECIAL,
    STATUS
};

const std::map <std::string, MoveCategory> stringToMoveCategoryMap {
    {"Physical", MoveCategory::PHYSICAL},
    {"Special", MoveCategory::SPECIAL},
    {"Status", MoveCategory::STATUS}
};

MoveCategory stringToMoveCategory(std::string stringMoveCat);

class Move
{
    public:
    Move();
    Move(std::string moveString);
    ~Move();
    private:
    //name
    std::string name;
    //type
    Type type;
    //base power
    int BP;
    //pp
    int PP;
    //accuracy
    int acc;
    //category
    MoveCategory category;
    //secondary effects?
};

#endif