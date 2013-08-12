#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED
struct vec2{
    short int x;
    short int y;
};
void change_vec2_x(vec2* vec, short int change);
void change_vec2_y(vec2* vec, short int change);
enum directions{
    up,
    down,
    left,
    right
};
#endif // STRUCTS_H_INCLUDED
