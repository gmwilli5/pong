#include "SDL/SDL.h"
#include "structs.h"
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination )
{
    ///Make a temporary rectangle to hold the offsets
    SDL_Rect offset;
    ///Give the offsets to the rectangle
    offset.x = x;
    offset.y = y;
        ///Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}
void apply_surface( vec2 pos, SDL_Surface* source, SDL_Surface* destination )
{
    ///Make a temporary rectangle to hold the offsets
    SDL_Rect offset;
    ///Give the offsets to the rectangle
    offset.x = pos.x;
    offset.y = pos.y;
        ///Blit the surface
    SDL_BlitSurface( source, NULL, destination, &offset );
}
