#ifndef Pokemon_H
#define Pokemon_H

#include <string>
#include "Abilities.h"
#include "Species.h"
#include "Nature.h"
#include "Gender.h"
#include "Stats.h"

//A class representing all the attributes a Pokemon has.
class Pokemon
{
    public:
    //Initialize the class
    Pokemon(nlohmann::json JSONMon);

    //Deallocate Memory
    ~Pokemon();

    int deriveStat();

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
    int HPIV;
    int ATKIV;
    int DEFIV;
    int SPAIV;
    int SPDIV;
    int SPEIV;

    //Its EVs
    int HPEV;
    int ATKEV;
    int DEFEV;
    int SPAEV;
    int SPDEV;
    int SPEEV;

    //The level of the Pokemon
    int level;
    //its experience
    int xp;
    //Is it shiny?
    bool shiny;
};

#endif