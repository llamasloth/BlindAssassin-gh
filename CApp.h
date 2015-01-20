#include <SDL2/SDL.h>
#include <stdio.h>

class CApp{
    private:
        bool Running;
        SDL_Window* window;
        SDL_Surface* screenSurface;
        SDL_Surface* gPicture;

    public: 

        CApp();
        int OnExecute();
        bool OnInit();
        void OnEvent(SDL_Event* Event);
        void OnLoop();
        void OnRender();
        void OnCleanup();

        bool loadMedia();
}; 
