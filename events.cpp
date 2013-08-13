#include "events.h"
#include <iostream>
events_class::events_class()
{
    event=new SDL_Event;
}
events_class::~events_class()
{
    delete event;
}
void events_class::event_loop()
{
    while(SDL_PollEvent(event)){
            events(event);
        }
}
void events_class::events(SDL_Event* e)
{
    if(event->type==SDL_QUIT){
        SDL_Quit();
        game->set_running(false);
    }
    if(e->type == SDL_KEYDOWN) {
        /*switch(e->key.keysym.sym){
                case SDLK_UP:
                    //0+99;
                    //std::cout<<28<<"\n";
                    break;
                default:
                    break;
        }*/
        if(e->key.keysym.sym==SDLK_UP||e->key.keysym.sym==SDLK_DOWN){
            game->get_player_one().handle_event(e);
        }
        if(e->key.keysym.sym==SDLK_s||e->key.keysym.sym==SDLK_w){
            game->get_player_two().handle_event(e);
        }
    }
}
void events_class::set_game(game_class* new_game)
{
    game=new_game;
}
