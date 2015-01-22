#include "CApp.h"

void CApp::OnEvent(SDL_Event* Event){
	if(Event->type == SDL_KEYDOWN) {
		switch(Event->key.keysym.sym) {
			case SDLK_w: jamesDestRect.y -= 15; break;
			case SDLK_s: jamesDestRect.y += 15; break;
			case SDLK_a: jamesDestRect.x -= 15; break;
			case SDLK_d: jamesDestRect.x += 15; break;
		}
	}
    else if(Event -> type == SDL_QUIT){
        Running = false;
    }
}
