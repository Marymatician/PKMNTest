#ifndef JsonReader_H
#define JsonReader_H

#include <fstream>
#include <string>
#include <nlohmann/json.hpp>

class JsonReader
{
    public:
    //Initialise the Class
    JsonReader();

    //Destroy the Class - including opened files!
    ~JsonReader();

    //Read the json file at a given directory, and return a json object.
    static nlohmann::json fetchJson(std::string path);

    private:
};

#endif