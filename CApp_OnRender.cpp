#include "CApp.h"
void CApp::OnRender(){
    SDL_RenderClear(renderer);
    jamesFace->Render(jamesDestRect.x, jamesDestRect.y, jamesDestRect.w, jamesDestRect.h);
    SDL_RenderCopy(renderer, gfonttexture, NULL, NULL);
    SDL_RenderPresent(renderer);
}
