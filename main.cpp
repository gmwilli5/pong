#include "game.h"
#include "paddle.h"
#include "ball.h"
#include "window.h"
int main()
{
    game_class g;
    g.game_loop();
    //while(1){}
    /*while(g.get_running()==true){
        //g.events();
        //std::cout<<player_one<<"\n";
        //int t=player_one;
        //std::cout<<t<<"\n";
        //while(running==true){
        g.get_events()->event_loop();
        //if(g.get_player_one!=t){
                //std::cout<<player_one<<"\n";
        //}
        g.update();
        g.render();
        //}
    }*/
}
