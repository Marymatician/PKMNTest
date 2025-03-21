#include "PokeDex.h"

PokeDex::PokeDex()
{
    JSONDexFetcher();
}

PokeDex& PokeDex::getPokeDex()
{
    static PokeDex singletonDex;
    return singletonDex;
}

PokeDex::~PokeDex()
{

}

void PokeDex::JSONDexFetcher()
{
    std::string filePath = "../../../res/PokeDex.json";

    JSONDex = JsonReader::fetchJson(filePath);
}

nlohmann::json PokeDex::fetchSpecies(std::string speciesName)
{
    return JSONDex.at(speciesName);
}