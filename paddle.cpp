#include "paddle.h"
#include "render_tools.h"
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

}
void paddle::move_up()
{

}
void paddle::render(SDL_Surface* screen)
{
    apply_surface(position,paddle_surface,screen);
}
