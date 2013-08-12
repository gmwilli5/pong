#include "paddle.h"
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

}
void paddle::move_down()
{

}
void paddle::move_up()
{

}
