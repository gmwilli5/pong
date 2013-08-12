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
        switch(e->key.keysym.sym){
                case SDLK_UP:
                    //0+99;
                    std::cout<<28<<"\n";
                    break;
                default:
                    break;
        }
    }
}
void events_class::set_game(game_class* new_game)
{
    game=new_game;
}
