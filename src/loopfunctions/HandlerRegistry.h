#ifndef HandlerRegistry_H
#define HandlerRegistry_H

#include <SDL2/SDL.h>
#include "InputHandler.h"
#include <vector>

class HandlerRegistry
{
    public:
    //Fetches the singleton handler registry.
    static HandlerRegistry& getRegistry();

    ~HandlerRegistry();

    void feedHandlers(SDL_Event& handedEvent);

    void addHandler(InputHandler* newHandler);

    private:
    //This will be another singleton class, so my constructor is private.
    HandlerRegistry();
    //The vector of all event handlers.
    std::vector<InputHandler *> registryVector;

};

#endif