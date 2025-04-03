#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>

#include "BattleController.h"
#include "PokeDex.h"
#include "PokemonTeam.h"
#include "LTexture.h"
#include "loopfunctions/Update.h"
#include "loopfunctions/Render.h"
#include "loopfunctions/Delay.h"

#include "Random.h"

Rand myRand;
int x = myRand.randint(1,10);


//Screen dimensions
const int SCREEN_WIDTH = 256;
const int SCREEN_HEIGHT = 192;

//global window - is there a better way?
SDL_Window* gWindow = NULL;

//global renderer
SDL_Renderer* gRenderer = NULL;

bool init()
{
    //Init Flag
    bool success = true;

    //Init SDL
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        printf("SDL could not initialize! SDL Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //set texture filtering to linear
        if(!SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY,"1"))
        {
            printf("Warning: Linear Texture filtering not enabled!");
        }
        //Create my Window
        gWindow = SDL_CreateWindow("WindowTest",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN);
        if(gWindow == NULL)
        {
            printf("Window could not be created! SDL Error: &s\n",SDL_GetError());
            success = false;
        }
        else
        {
            //Create my renderer
            gRenderer = SDL_CreateRenderer(gWindow,-1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
            if(gRenderer == NULL)
            {
                printf( "Renderer could not be created! SDL Error: %s\n", SDL_GetError() );
				success = false;
            }
            else
            {
                SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);

                //init PNG loading
                int imgFlags = IMG_INIT_PNG;
                if(!(IMG_Init(imgFlags)& imgFlags))
                {
                    printf("SDL image could not initialise! SDL image error: &s\n",IMG_GetError());
                    success = false;
                }
            }

        }
    }
    return success;
}

void cleanup()
{
    //Destroy Window
	SDL_DestroyRenderer( gRenderer );
	SDL_DestroyWindow( gWindow );
	gWindow = NULL;
	gRenderer = NULL;

	//Quit SDL subsystems
	IMG_Quit();
	SDL_Quit();
}

int main(int argc, char* args[])
{
    if (!init())
    {
        printf("Failed to initialise!\n");
    }
    else
    {
        //Main loop fla2^32g
        bool quit = false;

        //Event Handler
        SDL_Event e;

        PokemonTeam allyTeam;
        allyTeam.teamFromJSON(JsonReader::fetchJson("../../../res/PlayerTeam.json"));

        PokemonTeam enemyTeam;
        enemyTeam.teamFromJSON(JsonReader::fetchJson("../../../res/TrainerTeams/GymLeaderSophia.json"));
        
        BattleController savedController(allyTeam, enemyTeam);
        //While  running
        while  (!quit)
        {
            //update - takes player inputs, actions them, performs all game logic
            quit = update(e);
            
            //render - shows the newly updated screen!
            render(gRenderer);

            //delay - ensure this loop runs once every 1/60th of a second. SDL can handle this with .getPerformanceCounter()
            delay();
        }
        
    }

    cleanup();

    return 0;
}