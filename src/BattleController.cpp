#include "BattleController.h"
#include "TestListener.h"

BattleController::BattleController(PokemonTeam &allyTeam, PokemonTeam &enemyTeam) : allyTeam(allyTeam), enemyTeam(enemyTeam)
{
    //Placeholder for a proper listener that handles player inputs during a battle. For now, testlistener will do basic conversions.
    new TestListener(*this);
    weather = WeatherConditions::NONE;
    startBattle();
}

BattleController::~BattleController() {}

void BattleController::startBattle()
{

    //start of battle effects - players send their leads
    allyActive = BattlingPokemon(allyTeam.fetchLead());
    enemyActive = BattlingPokemon(enemyTeam.fetchLead());
}