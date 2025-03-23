#ifndef PokemonTeam_H
#define PokemonTeam_H

#include <vector>

#include "Pokemon.h"

//a class to contain a Pokemon Team.
class PokemonTeam
{
    public:
    PokemonTeam();

    //Deconstructor
    ~PokemonTeam();

    //read team from JSON
    void teamFromJSON(nlohmann::json jsonArray);
    
    //Returns the pokemon at a given position
    Pokemon operator[](int pos);

    private:
    std::vector <Pokemon> team;
};

#endif