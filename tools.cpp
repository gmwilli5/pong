#include "structs.h"
void change_vec2_y(vec2* vec,short int change)
{
    vec->y+=change;
}
void change_vec2_x(vec2* vec, short int change)
{
    vec->x+=change;
}
void change_vec2(vec2* vec, short int change_x,short int change_y)
{
    vec->x+=change_x;
    vec->y+=change_y;
}
vec2 operator+(vec2 a, vec2 b)
{
    vec2 temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
