#include "CApp.h"

bool CApp::OnInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return false;
    }
    if((window = SDL_CreateWindow("CApp", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, 0))==NULL){
        return false;
    }
    screenSurface = SDL_GetWindowSurface(window);
    return true;
}
