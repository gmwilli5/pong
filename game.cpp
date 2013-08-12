#include "game.h"
game_class::game_class()
{
    window.reinnit(600,500,32);
}
SDL_Surface* game_class::get_screen()
{
    return window.get_screen();
}
window_class game_class::get_window()
{
    return window;
}
