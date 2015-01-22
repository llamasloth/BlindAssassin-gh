#include "CApp.h"

bool loadMedia();

bool CApp::OnInit(){
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        return false;
    }
    if(!SDL_SetHint( SDL_HINT_RENDER_SCALE_QUALITY,"1")){
       printf("linear texture filtering failed");
       return false;
    } 
   if((window = SDL_CreateWindow("CApp", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 300, 447, 0))==NULL){
       return false;
    }
    if((renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED))==NULL){
        printf("renderer creation failed");
        return false;
    }
    SDL_SetRenderDrawColor(renderer, 0xFF, 0xFF, 0xFF, 0xFF);
    int imgFlags = IMG_INIT_JPG;
    if( !( IMG_Init( imgFlags ) & imgFlags )){
        printf("Image not initialized");
        return false;
    }
    loadMedia();
    return true;
}

bool CApp::loadMedia(){
    jamesFace = loadTexture(std::string("./james.jpg"));
    if(jamesFace == NULL){
        printf("Unable to load! SDL Error: %s\n", SDL_GetError());
        return false;
    }
    return true;
}

SDL_Texture* CApp::loadTexture(std::string path){
    SDL_Texture* newTexture = NULL;
    SDL_Surface* loadedSurface = IMG_Load(path.c_str());
    if(loadedSurface == NULL){
            printf("Failed to load");
            return NULL;
    }
    if((newTexture = SDL_CreateTextureFromSurface(renderer, loadedSurface)) == NULL){
        printf("failed to create texture");
        SDL_FreeSurface(loadedSurface);
        return NULL;
    }
    return newTexture;
}
    
SDL_Texture* CApp::renderText(std::string text, SDL_Color textColor){
    SDL_Surface* textSurface = TTF_RenderText_Solid(gfont, text.c_str(), textColor);
    SDL_Texture* textTexture;
    if (textSurface == NULL){
        printf("Text render failed %s\n", TTF_GetError());
        return NULL;
    }
    textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
    if(textTexture == NULL){
        printf("Text texture creation failed");
        return NULL;
    }
    return textTexture;
}
