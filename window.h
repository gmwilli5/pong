#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED
#include "SDL/SDL.h"
class window_class{
    private:
        SDL_Surface* screen;
    public:
        window_class();
        window_class(int width,int height,int bpp);
        SDL_Surface* get_screen();
        void set_screen(SDL_Surface* new_screen);
        void reinnit(int width,int height,int bpp);
        void render();
        ~window_class();
};
#endif // WINDOW_H_INCLUDED
