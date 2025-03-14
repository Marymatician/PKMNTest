#ifndef LTexture_H
#define LTexture_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>

//My  first attempt at  a C++ Class. What can go wrong?
class LTexture
{
    public:
    //Initialise the class
    LTexture();

    //Deallocates memory
    ~LTexture();

    //Loads the image at a specified filepath
    bool loadFromFile(SDL_Renderer* gRenderer, std::string path);

    //Deallocates Texture
    void free();

    //Renders texture  at given point
    void render(SDL_Renderer* gRenderer, int x, int y);

    //Gets image dimensions
    int getWidth();
    int getHeight();

    private:
    //the variable containing the actual texture
    SDL_Texture* mTexture;

    //Dimensions of the image
    int mWidth;
    int mHeight;
};

#endif