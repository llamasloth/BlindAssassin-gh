#include "CApp.h"
void CApp::OnRender(){
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, jamesFace, NULL, &jamesDestRect);
    SDL_RenderPresent(renderer);
}
