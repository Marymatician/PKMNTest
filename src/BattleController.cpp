#include "BattleController.h"
#include "TestListener.h"
#include "Move.h"

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
    startTurn();
}

void BattleController::startTurn()
{
    //Speed tiers are decided

    //the AI selects its move
    // DUMMY CODE
    enemyActive.selectMove(1);
    //

    //wait for player input
}

void BattleController::selectMove(int moveChoice)
{
    allyActive.selectMove(moveChoice);
    //the turn plays out
    postDecision();
}

void BattleController::postDecision()
{
    //Check the speed tiering (which should dynamically update)
    //the next pokemon in line takes its queued move, which is then removed from the speed tier options
    //repeat until there are no more moves to be taken
    startTurn();
}