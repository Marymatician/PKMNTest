#ifndef BattleController_H
#define BattleController_H

#include "PokemonTeam.h"
#include "BattlingPokemon.h"
#include <string>

//A class to handle the actual mechanics of a Pokemon Battle
class BattleController
{
    public:
    //Constructor
    BattleController(PokemonTeam &allyTeam, PokemonTeam &enemyTeam);

    //Deconstructor
    ~BattleController();

    bool BattleLoop();

    private:
    //The allyTeam and enemyTeam, objects of my custom class PokemonTeam. Vectors inside. These SHOULD be references?
    PokemonTeam& allyTeam;
    PokemonTeam& enemyTeam;

    BattlingPokemon allyActive;
    BattlingPokemon enemyActive;

    //Weather - as an enum
    enum class WeatherConditions
    {
        NONE,
        SUN,
        RAIN,
        SAND,
        SNOW,
        EXTEME_SUN,
        HEAVY_RAIN,
        STRONG_WINDS
    };

    WeatherConditions weather;

    //is the battle ongoing
    bool battleFinished;
};

#endif