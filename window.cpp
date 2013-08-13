#include "window.h"
window_class::window_class()
{
    screen=0;
}
window_class::window_class(int width,int height,int bpp)
{
    screen=SDL_SetVideoMode(width,height,bpp,SDL_SWSURFACE);
}
SDL_Surface* window_class::get_screen()
{
    return screen;
}
void window_class::set_screen(SDL_Surface* new_screen)
{
    screen=new_screen;
}
void window_class::reinnit(int width,int height,int bpp)
{
    screen=SDL_SetVideoMode(width,height,bpp,SDL_SWSURFACE);
}
window_class::~window_class()
{
    SDL_FreeSurface(screen);
}
void window_class::render()
{
    SDL_Rect temp;
    temp={0,0,500,600};
    SDL_FillRect(screen,&temp,0);
}
