#include "CApp.h"

bool loadMedia();

bool CApp::OnInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return false;
    }
    if((window = SDL_CreateWindow("CApp", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0))==NULL){
        return false;
    }
    screenSurface = SDL_GetWindowSurface(window);
    loadMedia();
    return true;
}

bool CApp::loadMedia(){
    gPicture = SDL_LoadBMP("./hello_world.bmp");
    if(gPicture == NULL){
        printf("Unable to load! SDL Error: %s\n", SDL_GetError());
        return false;
    }
    return true;
}
