#include "JsonReader.h"

JsonReader::JsonReader()
{
    
}

JsonReader::~JsonReader()
{
    
}

nlohmann::json JsonReader::fetchJson(std::string path)
{
    //opens the file at the path provided
    std::ifstream openFile(path);

    //uses the JSON library to create a json object of the contents of the file.
    nlohmann::json jsonObject = nlohmann::json::parse(openFile);

    //Clean up my mess!
    openFile.close();

    return jsonObject;
}