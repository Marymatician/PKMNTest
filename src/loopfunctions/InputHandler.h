#ifndef InputHandler_H
#define InputHandler_H

#include "../Listener.h"
#include <vector>
#include <SDL2/SDL.h>

class InputHandler
{
    public:
    //A constructor that is handed a reference to its listener Client, as well as a set of inputs it should wait for.
    InputHandler(Listener& listenerClient, std::vector<SDL_EventType> eventsVector);

    ~InputHandler();

    //Checks to see if the event it has been handed is one the handler is looking for.
    bool isApplicable(SDL_Event& handedEvent);

    //Returns the event to its client.
    void trigger(SDL_Event& handedEvent);

    //Takes an input, checks if it's applicable, triggers its client if so, and then returns true or false depending on if the input was used.
    bool handleInput(SDL_Event& handedEvent);

    private:
    //A pointer to the input handler's Listener.
    Listener& listenerClient;
    //A vector of SDL_EventTypes that the input handler is on the lookout for.
    std::vector<SDL_EventType> awaitedEvents;
};

#endif