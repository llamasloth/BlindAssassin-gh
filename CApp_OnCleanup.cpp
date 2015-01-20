#include "CApp.h"

void CApp::OnCleanup(){
    SDL_FreeSurface(screenSurface);
    SDL_FreeSurface(gPicture);
    SDL_Quit();
}
