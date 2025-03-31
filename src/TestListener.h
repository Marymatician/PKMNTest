#ifndef TestListener_H
#define TestListener_H

#include "Listener.h"
#include <SDL2/SDL.h>
#include "loopfunctions/InputHandler.h"
#include "BattleController.h"

class TestListener: public Listener
{
    public:
    TestListener(BattleController& parentBattle);
    ~TestListener();
    void receiveInput(SDL_Event& receivedEvent);
    private:
    BattleController& parentBattle;
};

#endif