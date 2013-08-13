#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED
#include "SDL/SDL.h"
#include "structs.h"
#include "game.h"
class game_class;
class paddle{
    private:
        SDL_Surface* paddle_surface;
        vec2 position;
        directions* dirc;
        game_class* game;
    private:
        void load_paddle();
        void move_down();
        void move_up();
        void move();
        void set_direction(directions new_dirc);
        void position_check();
    public:
        paddle();
        void re_load_paddle();
        void move(directions direction);
        void render(SDL_Surface* screen);
        void handle_event(SDL_Event* event);
        void update();
        void set_game(game_class* new_game);
        void set_position(short int x,short int y);
};
#endif // PADDLE_H_INCLUDED
