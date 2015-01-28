#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include <string>

class Texture {
	
	private:
	
		SDL_Renderer* Renderer;
		SDL_Texture* cTexture;
		
		std::string Filename;
		
		int width;
		int height;
		
	public:
	
		Texture();
		~Texture();
		
		bool Load(SDL_Renderer* renderer, std::string filename);
		
		void Render(int x, int y);
		void Render(int x, int y, int width, int height);
		void Render(int x, int y, int width, int height, int sx, int sy, int swidth, int sheight);
		
		int getWidth();
		int getHeight();
};
