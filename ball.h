#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
class ball_class{
    private:
        SDL_Surface* ball;
        vec2 position;
        vec2 velocity;
    private:
        void load_ball();
        void move();
    public:
        void re_load_ball();
        void render(SDL_Surface* screen);
        void update();
};
#endif // BALL_H_INCLUDED
