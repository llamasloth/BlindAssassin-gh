#include "CApp.h"

void CApp::OnCleanup(){
    SDL_DestroyTexture(jamesFace);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    SDL_Quit();
}
