#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>

#include "Pokemon.h"
#include "PokeDex.h"
#include "PokemonTeam.h"
#include "LTexture.h"

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

bool loadMedia()
{
    //loading success flag
    bool success = true;

    //Load PNG texture

    // if(!gTexture.loadFromFile(gRenderer, "../../../res/garchomp.png"))
    // {
    //     printf("Failed to load texture image!\n");
    //     success = false;
    // }
    // else if(!bTexture.loadFromFile(gRenderer, "../../../res/blaziken.png"))
    // {
    //     printf("Failed to load texture image!\n");
    //     success = false;
    // }

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
        //Load media
        if( !loadMedia())
        {
            printf("Failed to load media!\n");
        }
        else
        {
            //Main loop flag
            bool quit = false;

            //Event Handler
            SDL_Event e;

            //////////////////////////////////////////////////////////////////////////////////////////

            Pokemon allyMon("Blaziken");

            Pokemon enemyMon("Garchomp");
            
            LTexture allyMonSprite;
            LTexture enemyMonSprite;

            PokemonTeam allyTeam(allyMon);
            PokemonTeam enemyTeam(enemyMon);

            allyMonSprite.loadFromFile(gRenderer, "../../../res/Blaziken.png");
            enemyMonSprite.loadFromFile(gRenderer, "../../../res/Garchomp.png");

            //////////////////////////////////////////////////////////////////////////////////////////

            //While  running
            while  (!quit)
            {
                //handle a queue of events
                while(SDL_PollEvent(&e)!=0)
                {
                    //if quit
                    if(e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }
                //Clear screen
                SDL_SetRenderDrawColor(gRenderer, 0x00, 0x00, 0x00, 0xFF);
                SDL_RenderClear(gRenderer);
                
                //render texture to screen
                allyMonSprite.render(gRenderer, 0, 112);
                enemyMonSprite.render(gRenderer, 150,10);

                //Update Screen
                SDL_RenderPresent(gRenderer);
            }

            allyMonSprite.free();
            enemyMonSprite.free();
        }
    }

    cleanup();

    return 0;
}