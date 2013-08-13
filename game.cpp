#include "game.h"
#include <iostream>
game_class::game_class()
{
    window.reinnit(600,500,32);
    running=true;
    events=new events_class;
    events->set_game(this);
    player_one=new paddle;
    player_one->set_game(this);
    player_two=new paddle;
    player_two->set_game(this);
    player_two->set_position(570,0);
    p1_pos.x=0;
    p1_pos.y=0;
}
game_class::~game_class()
{
    delete events;
    delete player_one;
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
    //std::cout<<player_one<<"\n";
    //int t=player_one;
    //std::cout<<t<<"\n";
    while(running==true){
        events->event_loop();
        //if(player_one!=t){
            //std::cout<<player_one<<"\n";
        //}
        update();
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
    window.render();
    player_one->render(get_screen());
    player_two->render(get_screen());
    SDL_Flip(get_screen());
}
paddle game_class::get_player_one()
{
    return *player_one;
}
void game_class::set_p1_pos(short int x,short int y)
{
    p1_pos.x=x;
    p1_pos.y=y;
}
vec2 game_class::get_p1_pos()
{
    return p1_pos;
}
paddle game_class::get_player_two()
{
    return *player_two;
}
void game_class::update()
{
    player_one->update();
    player_two->update();
}
vec2 game_class::get_p2_pos()
{
    return p2_pos;
}
bool game_class::get_running()
{
    return running;
}
events_class* game_class::get_events()
{
    return events;
}
