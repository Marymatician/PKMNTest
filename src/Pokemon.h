#ifndef Pokemon_H
#define Pokemon_H

#include <string>
#include "Abilities.h"
#include "Species.h"
#include "Nature.h"

//A class representing all the attributes a Pokemon has.
class Pokemon
{
    public:
    //Initialize the classS
    Pokemon(std::string stringSpecies);

    //Deallocate Memory
    ~Pokemon();

    private:
    //The species of the Pokemon, my Species class
    Species species;

    //the nickname of the pokemon
    std::string nickname;
    //The level of the Pokemon
    int level;
    //its experience
    int xp;

    //its ability, represented as an enum.
    AbilityEnum ability;

    //Is it shiny?
    bool shiny;

    //Its nature, represented as an Enum.
    Nature nature;

    //its gender
    std::string gender;
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
};

#endif