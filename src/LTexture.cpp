#include "LTexture.h"

LTexture::LTexture()
{
    mTexture = NULL;
    mWidth = 0;
    mHeight = 0;
}

LTexture::~LTexture()
{
    free();
}

bool LTexture::loadFromFile(SDL_Renderer* gRenderer, std::string path)
{
    //clear pre-existing texture
    free();

    SDL_Texture* fastLoadTexture = IMG_LoadTexture(gRenderer, path.c_str());
    if (fastLoadTexture == NULL)
    {
        printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
    }
    else
    {
        SDL_QueryTexture(fastLoadTexture, NULL, NULL, &mWidth, &mHeight);
    }

    mTexture = fastLoadTexture;
    return mTexture != NULL;
}

void LTexture::free()
{
    //If the texture exists, destroy it
    if(mTexture != NULL)
    {
        SDL_DestroyTexture(mTexture);
        mTexture = NULL;
        mWidth = 0;
        mHeight = 0;
    }
}

void LTexture::render(SDL_Renderer* gRenderer, int x, int y)
{
    //Set the space it renders to, and then render to screen
    SDL_Rect renderQuad = {x,y,mWidth,mHeight};
    SDL_RenderCopy(gRenderer,  mTexture, NULL, &renderQuad);
}

int LTexture::getWidth()
{
    return mWidth;
}

int LTexture::getHeight()
{
    return mHeight;
}