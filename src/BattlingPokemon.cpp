#include "BattlingPokemon.h"

BattlingPokemon::BattlingPokemon(Pokemon &activeMon) : activeMon(activeMon)
{
    statline = activeMon.getStatline();
}

BattlingPokemon::~BattlingPokemon() {}

BattlingPokemon::BattlingPokemon() {}