#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "SDL/SDL.h"
#include "window.h"
#include "events.h"
#include "paddle.h"
class events_class;
class paddle;
class game_class{
    private:
        window_class window;
        bool running;
        events_class* events;
        paddle* player_one;
        vec2 p1_pos;
    public:
        game_class();
        ~game_class();
        SDL_Surface* get_screen();
        window_class get_window();
        paddle get_player_one();
        void game_loop();
        void set_running(bool new_running);
        void render();
        void update();
        void set_p1_pos(short int x,short int y);
        bool get_running();
        vec2 get_p1_pos();
        events_class* get_events();
};
#endif // GAME_H_INCLUDED
