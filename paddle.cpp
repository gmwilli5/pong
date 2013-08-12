#include "paddle.h"
#include "render_tools.h"
#include "tools.h"
#include <iostream>
paddle::paddle()
{
    position.x=0;
    position.y=0;
    paddle_surface=NULL;
    load_paddle();
}
void paddle::re_load_paddle()
{
    load_paddle();
}
void paddle::move(directions direction)
{
    if(direction!=up&&direction!=down){
        return;
    }
    else{
        if(direction==up){
            move_down();
            return;
        }
        if(direction==down){
            move_up();
            return;
        }
    }
}
void paddle::load_paddle()
{
    /*SDL_Rect temp;
    temp={0,0,2,10};
    SDL_FillRect(paddle_surface,&temp,767);*/
    paddle_surface=SDL_LoadBMP("enemy.bmp");
}
void paddle::move_down()
{
    change_vec2_y(&position, 10);
}
void paddle::move_up()
{
    change_vec2_y(&position, -10);
}
void paddle::render(SDL_Surface* screen)
{
    apply_surface(position,paddle_surface,screen);
}
void paddle::handle_event(SDL_Event* event)
{
    if(event->type == SDL_KEYDOWN) {
        switch(event->key.keysym.sym){
                case SDLK_UP:
                    //0+99;
                    std::cout<<56<<"\n";
                    move_up();
                    break;
                case SDLK_DOWN:
                    //0+99;
                    std::cout<<68<<"\n";
                    move_down();
                    break;
                default:
                    break;
        }
    }
}
