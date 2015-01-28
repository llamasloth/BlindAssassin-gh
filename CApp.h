#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <cmath>

#include "Texture.h"

class CApp{
    private:
        bool Running;
        SDL_Window* window;
        SDL_Renderer* renderer;
        Texture* jamesFace;
        SDL_Rect jamesDestRect;
        SDL_Texture* gfonttexture;
        TTF_Font* gfont;

    public: 

        CApp();
        int OnExecute();
        bool OnInit();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();
        
        SDL_Texture* loadTexture(std::string path);
        SDL_Texture* renderText(std::string text, SDL_Color textColor);
        bool loadMedia();
}; 
