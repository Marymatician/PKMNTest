#include "PokemonTeam.h"

PokemonTeam::PokemonTeam(std::optional<Pokemon> Pokemon1, std::optional<Pokemon> Pokemon2)
{
    team.reserve(6);
    
    if (Pokemon1)
    {
        team.push_back(Pokemon1.value());
    }

    if (Pokemon2)
    {
        team.push_back(Pokemon2.value());
    }
}

PokemonTeam::~PokemonTeam()
{

}

Pokemon PokemonTeam::operator[](int pos)
{
    if (pos < 6)
    {
        return team[pos];
    }
    else
    {
        return team[0];
    }
}