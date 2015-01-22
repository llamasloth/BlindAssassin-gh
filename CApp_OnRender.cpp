#include "CApp.h"
void CApp::OnRender(){
    SDL_RenderClear(renderer);
    SDL_RenderCopy(renderer, jamesFace, NULL, &jamesDestRect);
    SDL_RenderCopy(renderer, gfonttexture, NULL, NULL);
    SDL_RenderPresent(renderer);
}
