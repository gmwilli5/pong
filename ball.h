#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED
#include "SDL/SDL.h"
class ball_class{
    private:
        SDL_Surface* ball;
        void load_ball();
    public:
        void re_load_ball();
};
#endif // BALL_H_INCLUDED
