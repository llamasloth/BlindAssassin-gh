#include "CApp.h"
void CApp::OnRender(){
    SDL_BlitSurface(gPicture, NULL, screenSurface, NULL);
    SDL_UpdateWindowSurface(window);
}
