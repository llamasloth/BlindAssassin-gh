#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>
#include <stdio.h>
#include <string>
#include <cmath>

class CApp{
    private:
        bool Running;
        SDL_Window* window;
        SDL_Renderer* renderer;
        SDL_Texture* jamesFace;
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
