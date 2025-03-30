#ifndef TestListener_H
#define TestListener_H

#include "Listener.h"
#include <SDL2/SDL.h>
#include "loopfunctions/InputHandler.h"

class TestListener: public Listener
{
    public:
    TestListener();
    ~TestListener();
    void receiveInput(SDL_Event& receivedEvent);
    bool queryQuit();
    private:
    bool quitValue;
};

#endif