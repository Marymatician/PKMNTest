#ifndef Species_H
#define Species_H

#include <string>
#include <vector>
#include <map>
#include "PokeDex.h"
#include "Types.h"
#include "Abilities.h"
#include "EggGroups.h"
#include "Stats.h"

class Species
{
    public:
    Species();
    Species(nlohmann::json dexInfo);

    ~Species();

    std::vector<int> returnStats();

    private:
    //The name of the species, represented as a string. Maybe this could be an Enum? For now, a string is fine.
    std::string name;
    
    //The pokedex number of the species. Potentially helpful later if this becomes a full game. Useless now.
    int dexNum;

    //The vector, setup to hold type enums, that will contain the types of the Pokemon.
    std::vector <Type> typeline;

    //The base stats of the species.
    std::vector <int> statline;

    //A map of the enums of ability 1, 2, hidden, to the string name of that ability. Later, should be ability class?
    std::map <AbilityEnum, std::string> abilityList;

    //gender ratio
    float genderRatio;
    //The species height, stored as a float.
    float height;
    //the species weight, stored as a float.
    float weight;

    //The egg groups vector, holding egg groups enums.
    std::vector <EggGroupsEnum> eggGroups;
};

#endif