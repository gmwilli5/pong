#include "game.h"
#include <iostream>
game_class::game_class()
{
    window.reinnit(600,500,32);
    running=true;
    events=new events_class;
    events->set_game(this);
}
game_class::~game_class()
{
    delete events;
}
SDL_Surface* game_class::get_screen()
{
    return window.get_screen();
}
window_class game_class::get_window()
{
    return window;
}
void game_class::game_loop()
{
    while(running==true){
        events->event_loop();
        render();
    }
}
void game_class::set_running(bool new_running)
{
    running=new_running;
}
void game_class::render()
{
    //std::cout<<34<<"\n";
    player_one.render(get_screen());
    SDL_Flip(get_screen());
}
paddle game_class::get_player_one()
{
    return player_one;
}
