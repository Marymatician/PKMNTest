#include "TestListener.h"

TestListener::TestListener()
{
    quitValue = false;
    std::vector<SDL_EventType> wantedInputs;
    wantedInputs.push_back(SDL_MOUSEBUTTONDOWN);
    createHandler(wantedInputs);
}

TestListener::~TestListener()
{

}

void TestListener::receiveInput(SDL_Event& receivedEvent)
{
    if (receivedEvent.type == SDL_MOUSEBUTTONDOWN)
    {
        quitValue = true;
    }
}

bool TestListener::queryQuit()
{
    if(quitValue)
    {
        return true;
    }
    return false;
}