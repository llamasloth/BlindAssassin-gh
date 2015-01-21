#include "CApp.h"

void CApp::OnCleanup(){
    SDL_FreeSurface(screenSurface);
    SDL_DestroyTexture(jamesFace);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}
