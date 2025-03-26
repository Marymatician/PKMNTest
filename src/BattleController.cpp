#include "BattleController.h"

BattleController::BattleController(PokemonTeam &allyTeam, PokemonTeam &enemyTeam) : allyTeam(allyTeam), enemyTeam(enemyTeam)
{
    weather = WeatherConditions::NONE;
    battleFinished = false;
}

BattleController::~BattleController() {}

bool BattleController::BattleLoop()
{
    //start of battle effects - players send their leads
    allyActive = BattlingPokemon(allyTeam.fetchLead());
    enemyActive = BattlingPokemon(enemyTeam.fetchLead());

    while (battleFinished == false)
    {
        //the player picks a move! they can:
            //fight - use a move their pokemon knows
            //party - switch their pokemon out, check their team's stats
            //bag - use an item they have in their bag
            //run - flee the battle
        //then the opponent picks their move

        //the results of each choice plays out, in priority and speed order
        
        //cleanup, end of round effects, tick damage, etc.

        //if a pokemon has fainted, their controller may switch in a new pokemon if able. If unable, they lose.
    }
}