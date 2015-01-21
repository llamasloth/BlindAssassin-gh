#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <string>

class CApp{
    private:
        bool Running;
        SDL_Window* window;
        SDL_Surface* screenSurface;
        SDL_Renderer* renderer;
        SDL_Texture* jamesFace;

    public: 

        CApp();
        int OnExecute();
        bool OnInit();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();
        
        SDL_Texture* loadTexture(std::string path);
        bool loadMedia();
}; 
