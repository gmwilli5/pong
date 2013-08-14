#ifndef WALL_H_INCLUDED
#define WALL_H_INCLUDED
class wall{
    private:
        aabb position;
    public:
        void get_position();
        void update();
};
#endif // WALL_H_INCLUDED
