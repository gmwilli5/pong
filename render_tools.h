#ifndef RENDER_TOOLS_H_INCLUDED
#define RENDER_TOOLS_H_INCLUDED
#include "structs.h"
void apply_surface( int x, int y, SDL_Surface* source, SDL_Surface* destination );
void apply_surface( vec2 pos, SDL_Surface* source, SDL_Surface* destination );
#endif // RENDER_TOOLS_H_INCLUDED
