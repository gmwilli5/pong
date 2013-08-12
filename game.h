#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "SDL/SDL.h"
#include "window.h"
class game_class{
    private:
        window_class window;
    public:
        game_class();
        SDL_Surface* get_screen();
        window_class get_window();
};
#endif // GAME_H_INCLUDED
