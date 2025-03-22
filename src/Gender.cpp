#include "Gender.h"

Gender stringToGenderEnum(std::string stringGender)
{
    return stringToGenderMap.at(stringGender);
}