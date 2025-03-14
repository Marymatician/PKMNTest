#include "Pokemon.h"

Pokemon::Pokemon()
{
    species = "";
    level = 1;
    xp = 0;
    //shininess - should be random later.
    shiny = false;
    //nature - should also be random
    nature = "Docile";
    //gender - random too!
    gender = "";
    //later pass this the number of guaranteed IVs when doing proper RNG?
    HPIV = 0;
    ATKIV = 0;
    DEFIV = 0;
    SPAIV = 0;
    SPDIV = 0;
    SPEIV = 0;
    //EVs
    HPEV = 0;
    ATKEV = 0;
    DEFEV = 0;
    SPAEV = 0;
    SPDEV = 0;
    SPEEV = 0;
}

Pokemon::~Pokemon()
{

}

void Pokemon::setSpecies(std::string inpSpecies)
{
    species = inpSpecies;
}

std::string Pokemon::getSpecies()
{
    return species;
}