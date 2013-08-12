#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
class paddle{
    private:
        SDL_Surface* paddle;
        vec2 position;
        void load_paddle();
    private:
        void move_down();
        void move_up();
    public:
        void re_load_paddle();
        void move(directions direction);
};
#endif // PADDLE_H_INCLUDED
