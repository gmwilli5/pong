#ifndef STRUCTS_H_INCLUDED
#define STRUCTS_H_INCLUDED
struct vec2{
    short int x;
    short int y;
};
void change_vec2_x(vec2* vec, short int change);
void change_vec2_y(vec2* vec, short int change);
void change_vec2(vec2* vec, short int change_x,short int change_y);
vec2 operator+(vec2 a, vec2 b);
enum directions{
    none,
    up,
    down,
    left,
    right
};
enum collision_types{
    wall,
    paddle,
    ball,
    score,
};
enum ball_collision_types{
    none_b,
    wall_b,
    goal_b,
    paddle_b,
};
struct aabb{
    vec2 top;
    vec2 bottom;
};
#endif // STRUCTS_H_INCLUDED
