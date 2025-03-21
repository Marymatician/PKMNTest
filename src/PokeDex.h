#ifndef PokeDex_H
#define PokeDex_H

#include <string>
#include <nlohmann/json.hpp>
#include "JsonReader.h"

class PokeDex
{
    public:

    static PokeDex& getPokeDex();

    ~PokeDex();

    //gets the json object of the dex file and stores it in the class.
    void JSONDexFetcher();

    //When given a species name, returns the block of JSON data relevant to that species
    nlohmann::json fetchSpecies(std::string speciesName);

    private:
    //I want to make a Singleton class, so my constructor must be private.
    PokeDex();

    //The json object of the dex, stored here as part of the class.
    nlohmann::json JSONDex;
};

#endif