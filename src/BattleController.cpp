#include "BattleController.h"

BattleController::BattleController(PokemonTeam &allyTeam, PokemonTeam &enemyTeam) : allyTeam(allyTeam), enemyTeam(enemyTeam)
{
    weather = WeatherConditions::NONE;
}

BattleController::~BattleController()
{

}