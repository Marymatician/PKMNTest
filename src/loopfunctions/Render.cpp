#include "Render.h"

void render(SDL_Renderer* gRenderer)
{
    SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
    SDL_RenderClear(gRenderer);

    SDL_RenderPresent(gRenderer);
}