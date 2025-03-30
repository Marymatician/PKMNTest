#ifndef Update_H
#define Update_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include "HandlerRegistry.h"

//For now, returns quit as a boolean.
bool update(SDL_Event& e);

#endif