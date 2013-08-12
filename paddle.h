#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
class paddle{
    private:
        SDL_Surface* paddle_surface;
        vec2 position;
        void load_paddle();
    private:
        void move_down();
        void move_up();
    public:
        paddle();
        void re_load_paddle();
        void move(directions direction);
        void render(SDL_Surface* screen);
};
#endif // PADDLE_H_INCLUDED
