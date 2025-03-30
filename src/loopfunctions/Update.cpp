#include "Update.h"

bool update (SDL_Event& e) {
    bool quit = false;
    //handle a queue of events
    while(SDL_PollEvent(&e)!=0)
    {
        //if quit
        if(e.type == SDL_QUIT)
        {
            quit = true;
        }
        else
        {
            //finds the singleton event registry
            HandlerRegistry& referenceRegistry = HandlerRegistry::getRegistry();
            referenceRegistry.feedHandlers(e);
        }
    }
    return quit;
}