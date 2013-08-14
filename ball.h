#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
#include "game.h"
//class game_class;
namespace balls{
    class ball_class{
        private:
            SDL_Surface* ball;
            vec2 position;
            vec2 velocity;
            aabb pos;
            game_class* game;
        private:
            void load_ball();
            void move();
            void detect_collision();
            void resolve_collision();
        public:
            ball_class();
            void re_load_ball();
            void render(SDL_Surface* screen);
            void update();
            aabb get_aabb();
    };
}
#endif // BALL_H_INCLUDED
