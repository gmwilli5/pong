#ifndef EVENTS_H_INCLUDED
#define EVENTS_H_INCLUDED
#include "SDL/SDL.h"
#include "game.h"
class game_class;
class events_class{
    private:
        SDL_Event* event;
        void events(SDL_Event* e);
        game_class* game;
    public:
        events_class();
        ~events_class();
        void event_loop();
        void set_game(game_class* new_game);
};
#endif // EVENTS_H_INCLUDED
