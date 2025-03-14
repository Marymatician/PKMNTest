#ifndef Pokemon_H
#define Pokemon_H

#include <string>

//A class representing all the attributes a Pokemon has.
class Pokemon
{
    public:
    //Initialize the class
    Pokemon();

    //Deallocate Memory
    ~Pokemon();

    //Sets the species of the Pokemon
    void setSpecies(std::string species);

    //Retrieves the species of the Pokemon
    std::string getSpecies();

    private:
    //The species of the Pokemon
    std::string species;
    //The level of the Pokemon
    int level;
    //its experience
    int xp;
    //Is it shiny?
    bool shiny;
    //Its nature
    std::string nature;
    //its gender
    std::string gender;
    //Its IVs
    int HPIV;
    int ATKIV;
    int DEFIV;
    int SPAIV;
    int SPDIV;
    int SPEIV;
    //Its EVs
    int HPEV;
    int ATKEV;
    int DEFEV;
    int SPAEV;
    int SPDEV;
    int SPEEV;
};

#endif