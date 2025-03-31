#include "Move.h"
#include <nlohmann/json.hpp>
#include "JsonReader.h"

MoveCategory stringToMoveCategory(std::string stringMoveCat)
{
    return stringToMoveCategoryMap.at(stringMoveCat);
}

Move::Move() {}
Move::~Move() {}

Move::Move(std::string moveString) {
    nlohmann::json JSONMove = JsonReader::fetchJsonValue("../../../res/Moves.json", moveString);
    if (!JSONMove.empty())
    {
        name = JSONMove.at("name");
        type = stringToType(JSONMove.at("type"));
        BP = JSONMove.at("BP");
        PP = JSONMove.at("PP");
        acc = JSONMove.at("acc");
        category = stringToMoveCategory(JSONMove.at("cat"));
    } else {
        //If the move called doesn't exist, catch it here.
    }
}