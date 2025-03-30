#ifndef Listener_H
#define Listener_H

#include <SDL2/SDL.h>
#include <vector>

class Listener
{
    public:
    //Creates an event handler, giving it a pointer back to the listener and a list of wanted inputs.
    void createHandler(std::vector<SDL_EventType> wantedInputs);
    virtual void receiveInput(SDL_Event& receivedEvent) = 0;
    private:
};

#endif