#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
class paddle{
    private:
        SDL_Surface* paddle_surface;
        vec2 position;
        directions dirc;
    private:
        void load_paddle();
        void move_down();
        void move_up();
        void move();
    public:
        paddle();
        void re_load_paddle();
        void move(directions direction);
        void render(SDL_Surface* screen);
        void handle_event(SDL_Event* event);
        void update();
};
#endif // PADDLE_H_INCLUDED
