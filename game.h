#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED
#include "SDL/SDL.h"
#include "window.h"
#include "events.h"
class events_class;
class game_class{
    private:
        window_class window;
        bool running;
        events_class* events;
    public:
        game_class();
        ~game_class();
        SDL_Surface* get_screen();
        window_class get_window();
        void game_loop();
        void set_running(bool new_running);
        void render();
};
#endif // GAME_H_INCLUDED
