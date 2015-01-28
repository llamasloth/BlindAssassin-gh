#include "Texture.h"

Texture::Texture() {
}

Texture::~Texture() {
	if(cTexture) {
		SDL_DestroyTexture(cTexture);
		cTexture = NULL;
	}
}

bool Texture::Load(SDL_Renderer* renderer, std::string filename) {
	Renderer = renderer;
	SDL_Log("%s", filename.c_str());
	SDL_Log("Here 4");
	if(Renderer == NULL) {
		SDL_Log("Bad renderer");
		return false;
	}
	Filename = filename;
	SDL_Log("Here 5");
	SDL_Surface* tempSurface = IMG_Load(Filename.c_str());
	if(tempSurface == NULL) {
		printf("Unable to load image");
		return false;
	}
	
	if ((cTexture = SDL_CreateTextureFromSurface(Renderer, tempSurface)) == NULL) {
		printf("Unable to create SDL Texture %s: %s", Filename.c_str(), IMG_GetError());
		return false;
	}
	SDL_QueryTexture(cTexture, NULL, NULL, &width, &height);
	SDL_FreeSurface(tempSurface);
	return true;
}
		
void Texture::Render(int x, int y) {
	Render(x, y, width, height);
}

void Texture::Render(int x, int y, int width, int height) {
	SDL_Rect DestR = {x, y, width, height};
	
	SDL_RenderCopy(Renderer, cTexture, NULL, &DestR);
}

void Texture::Render(int x, int y, int width, int height, int sx, int sy, int swidth, int sheight) {
	SDL_Rect DestR = {x, y, width, height};
	SDL_Rect SrcR = {sx, sy, swidth, sheight};
	
	SDL_RenderCopy(Renderer, cTexture, &SrcR, &DestR);
}

int Texture::getWidth() {
	return width;
}

int Texture::getHeight() {
	return height;
}	
	
