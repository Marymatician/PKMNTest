#include "InputHandler.h"


InputHandler::InputHandler(Listener& listenerClient, std::vector<SDL_EventType> eventsVector) : listenerClient(listenerClient)
{
    awaitedEvents = eventsVector;
}

InputHandler::~InputHandler()
{

}

bool InputHandler::isApplicable(SDL_Event& handedEvent)
{
    bool applicable = false;

    for (SDL_EventType awaitedEvent : awaitedEvents) {
        if (handedEvent.type == awaitedEvent) {
            applicable = true;
        }
    }

    return applicable;
}

void InputHandler::trigger(SDL_Event& handedEvent)
{
    listenerClient.receiveInput(handedEvent);
}

bool InputHandler::handleInput(SDL_Event& handedEvent)
{
    bool consumeEvent = false;

    if (isApplicable(handedEvent)) {
        consumeEvent = true;
        trigger(handedEvent);
    }

    return consumeEvent;
}