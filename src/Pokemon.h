#ifndef Pokemon_H
#define Pokemon_H

#include <string>
#include <cmath>
#include "Abilities.h"
#include "Species.h"
#include "Nature.h"
#include "Gender.h"
#include "Stats.h"
#include "Status.h"

//A class representing all the attributes a Pokemon has.
class Pokemon
{
    public:
    //Initialize the class
    Pokemon(nlohmann::json JSONMon);
    Pokemon();

    //Deallocate Memory
    ~Pokemon();

    int deriveStat(Stats statEnum);

    Status getStatus();

    std::vector<int> getStatline();

    private:
    //The species of the Pokemon, my Species class
    Species species;

    //the nickname of the pokemon
    std::string nickname;

    //its ability, represented as an enum.
    AbilityEnum ability;

    //Its nature, represented as an Enum.
    Nature nature;

    //its gender
    Gender gender;

    //Its IVs
    std::vector <int> IVs;

    //Its EVs
    std::vector <int> EVs;

    //The level of the Pokemon
    int level;
    //its experience
    int xp;
    //Is it shiny?
    bool shiny;

    Status status;
};

#endif