#include "BattleController.h"

BattleController::BattleController(PokemonTeam &allyTeam, PokemonTeam &enemyTeam) : allyTeam(allyTeam), enemyTeam(enemyTeam)
{
    weather = WeatherConditions::NONE;
    allyActive = BattlingPokemon(allyTeam.fetchLead());
    enemyActive = BattlingPokemon(enemyTeam.fetchLead());
}

BattleController::~BattleController()
{

}