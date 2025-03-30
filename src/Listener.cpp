#include "Listener.h"
#include "loopfunctions/InputHandler.h"
#include "loopfunctions/HandlerRegistry.h"

void Listener::createHandler(std::vector<SDL_EventType> wantedInputs)
{
    InputHandler* myHandler = new InputHandler(*this, wantedInputs);
    HandlerRegistry& referenceRegistry = HandlerRegistry::getRegistry();
    referenceRegistry.addHandler(myHandler);
}