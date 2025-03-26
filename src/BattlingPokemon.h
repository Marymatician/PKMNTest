#ifndef BattlingPokemon_H
#define BattlingPokemon_H

#include "Pokemon.h"

class BattlingPokemon {
    public:
    BattlingPokemon(Pokemon &activeMon);
    BattlingPokemon();
    ~BattlingPokemon();

    private:
    //The pokemon this battler represents.
    Pokemon activeMon;
    //a vector of a pokemon's statline.
    std::vector <int> statline;
};

#endif