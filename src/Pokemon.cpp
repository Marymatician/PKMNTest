#include "Pokemon.h"

Pokemon::Pokemon(std::string stringSpecies)
{
    PokeDex& referenceDex = PokeDex::getPokeDex();
    species = Species(referenceDex.fetchSpecies(stringSpecies));
}

Pokemon::~Pokemon()
{

}