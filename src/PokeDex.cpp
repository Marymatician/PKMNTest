#include "PokeDex.h"

PokeDex::PokeDex()
{
    JSONDexFetcher();
}

PokeDex::~PokeDex()
{

}

void PokeDex::JSONDexFetcher()
{
    std::string filePath = "../../../res/PokeDex.json";

    JSONDex = JsonReader::fetchJson(filePath);
}