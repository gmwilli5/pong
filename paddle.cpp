#include "paddle.h"
#include "render_tools.h"
#include "tools.h"
#include <iostream>
namespace player{
    paddle::paddle()
    {
        position.x=0;
        position.y=0;
        paddle_surface=NULL;
        //dirc=down;
        dirc=new directions;
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
    void paddle::move()
    {
        /*if(dirc!=up&&dirc!=down){
            return;
        }
        //else{
            if(dirc==up){
                move_down();
                return;
            }
            if(dirc==down){
                move_up();
                return;
            }
        //}*/
        //std::cout<<dirc<<"\n";
        //move_down();
        if(*dirc==up){
            move_up();
        }
        if(*dirc==down){
            move_down();
        }
        switch(*dirc){
            std::cout<<50<<"\n";
            case up:
                move_up();
                break;
            case down:
                move_down();
                break;
            default:
                break;
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
        //change_vec2_y(&position, 10);
        //std::cout<<position.x<<","<<position.y<<"\n";
        position.y=position.y+1;
        //std::cout<<position.x<<","<<position.y<<"\n";
        //std::cout<<game->get_p1_pos().x<<","<<game->get_p1_pos().y<<"\n";
        //game->set_p1_pos(game->get_p1_pos().x,(game->get_p1_pos().y+10));
        //std::cout<<game->get_p1_pos().x<<","<<game->get_p1_pos().y<<"\n";
    }
    void paddle::move_up()
    {
        //change_vec2_y(&position, -10);
        //std::cout<<position.x<<","<<position.y<<"\n";
        position.y=position.y-1;
        //std::cout<<position.x<<","<<position.y<<"\n";
        //std::cout<<game->get_p1_pos().x<<","<<game->get_p1_pos().y<<"\n";
        //game->set_p1_pos(game->get_p1_pos().x,(game->get_p1_pos().y-10));
        //std::cout<<game->get_p1_pos().x<<","<<game->get_p1_pos().y<<"\n";
    }
    void paddle::render(SDL_Surface* screen)
    {
        if(position.y!=10){
            std::cout<<position.x<<","<<position.y<<"\n";
        }
        apply_surface(position.x,position.y,paddle_surface,screen);
        //apply_surface(game->get_p1_pos().x,game->get_p1_pos().y,paddle_surface,screen);
    }
    void paddle::handle_event(SDL_Event* event)
    {
        if(event->type == SDL_KEYDOWN) {
            switch(event->key.keysym.sym){
                    case SDLK_UP:
                        //0+99;
                        std::cout<<56<<"\n";
                        //set_direction(up);
                        *dirc=up;
                        std::cout<<*dirc<<"\n";
                        //move_up();
                        //dirc=up;
                        break;
                    case SDLK_DOWN:
                        //0+99;
                        std::cout<<68<<"\n";
                        //dirc=down;
                        //set_direction(down);
                        std::cout<<*dirc<<"\n";
                        *dirc=down;
                        std::cout<<*dirc<<"\n";
                        //move_down();
                        break;
                    case SDLK_w:
                        //0+99;
                        std::cout<<56<<"\n";
                        //set_direction(up);
                        *dirc=up;
                        std::cout<<*dirc<<"\n";
                        //move_up();
                        //dirc=up;
                        break;
                    case SDLK_s:
                        //0+99;
                        std::cout<<68<<"\n";
                        //dirc=down;
                        //set_direction(down);
                        std::cout<<*dirc<<"\n";
                        *dirc=down;
                        std::cout<<*dirc<<"\n";
                        //move_down();
                        break;
                    default:
                        break;
            }
        }
    }
    void paddle::update()
    {
        //std::cout<<110<<"\n";
        move();
        position_check();
        //if(*dirc!=0){
            //std::cout<<*dirc<<"\n";
        //}
        //std::cout<<dirc<<"\n";
    }
    void paddle::set_direction(directions new_dirc)
    {
        std::cout<<*dirc<<"\n";
        *dirc=new_dirc;
        std::cout<<*dirc<<"\n";
        std::cout<<120<<"\n";
    }
    void paddle::set_game(game_class* new_game)
    {
        game=new_game;
    }
    void paddle::set_position(short int x,short int y)
    {
        position.x=x;
        position.y=y;
    }
    void paddle::position_check()
    {
        if(position.y<0){
            position.y=590;
        }
        if(position.y>600){
            position.y=0;
        }
    }
    aabb paddle::get_aabb()
    {
        return pos;
    }
}
