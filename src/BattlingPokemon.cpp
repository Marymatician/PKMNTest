#include "BattlingPokemon.h"

BattlingPokemon::BattlingPokemon(Pokemon &activeMon) : activeMon(activeMon)
{
    statline = activeMon.getStatline();
    //run the "on enter" part of the pokemon class
}

BattlingPokemon::~BattlingPokemon() {}

BattlingPokemon::BattlingPokemon() {}