#include "TestListener.h"

TestListener::TestListener(BattleController& parentBattle) : parentBattle(parentBattle)
{
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
        parentBattle.startBattle();
    }
}