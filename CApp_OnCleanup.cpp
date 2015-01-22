#include "CApp.h"

void CApp::OnCleanup(){
    SDL_DestroyTexture(jamesFace);
    TTF_CloseFont(gfont);
    SDL_DestroyTexture(gfonttexture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    IMG_Quit();
    TTF_Quit();
    SDL_Quit();
}
