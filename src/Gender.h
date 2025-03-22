#ifndef Gender_H
#define Gender_H

#include <map>
#include <string>

enum class Gender {
    MALE,
    FEMALE,
    GENDERLESS
};

const std::map <std::string, Gender> stringToGenderMap = {
    {"M",Gender::MALE},
    {"F",Gender::FEMALE},
    {"N",Gender::GENDERLESS}
};

Gender stringToGenderEnum(std::string genderString);

#endif