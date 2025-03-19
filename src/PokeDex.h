#ifndef PokeDex_H
#define PokeDex_H

#include <string>
#include <nlohmann/json.hpp>
#include "JsonReader.h"

class PokeDex
{
    public:
    PokeDex();

    ~PokeDex();

    //gets the json object of the dex file and stores it in the class.
    void JSONDexFetcher();

    private:
    //The json object of the dex, stored here as part of the class.
    nlohmann::json JSONDex;
};

#endif