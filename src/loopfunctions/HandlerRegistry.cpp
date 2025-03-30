#include "HandlerRegistry.h"

HandlerRegistry::HandlerRegistry()
{
    //The real constructor.
}

HandlerRegistry::~HandlerRegistry(){}

HandlerRegistry& HandlerRegistry::getRegistry()
{
    static HandlerRegistry singletonRegistry;
    return singletonRegistry;
}

void HandlerRegistry::feedHandlers(SDL_Event& handedEvent)
{
    //for every handler in the registry
    for (InputHandler* handler : registryVector) 
    {
        //dereferences the handler pointer
        if (handler->handleInput(handedEvent))
        {
            break;
        }
    }
}

void HandlerRegistry::addHandler(InputHandler* newHandler)
{
    registryVector.push_back(newHandler);
}