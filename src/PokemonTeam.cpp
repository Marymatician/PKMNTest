#include "PokemonTeam.h"

PokemonTeam::PokemonTeam()
{
    team.reserve(6);
}

PokemonTeam::~PokemonTeam()
{

}

void PokemonTeam::teamFromJSON(nlohmann::json jsonArray)
{
    //for each pokemon in the json array
    for (auto i = jsonArray.begin(); i != jsonArray.end(); i++) {
        //create an appropriate Pokemon, and add it to the team.
        team.push_back(Pokemon(i.value()));
    }
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