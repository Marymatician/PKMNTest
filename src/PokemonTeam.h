#ifndef PokemonTeam_H
#define PokemonTeam_H


#include <vector>
#include <optional>

#include "Pokemon.h"

//a class to contain a Pokemon Team.
class PokemonTeam
{
    public:

    //Constructor
    PokemonTeam(std::optional<Pokemon> Pokemon1 = std::nullopt, std::optional<Pokemon> Pokemon2 = std::nullopt);

    //Deconstructor
    ~PokemonTeam();

    //Returns the pokemon at a given position
    Pokemon operator[](int pos);

    private:
    std::vector <Pokemon> team;
};

#endif