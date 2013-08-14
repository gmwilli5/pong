#ifndef COLLISION_DETECTION_H_INCLUDED
#define COLLISION_DETECTION_H_INCLUDED
#include "game.h"
#include "structs.h"
#include <vector>
class collision_class{
    private:
        game_class* game;
        std::vector<aabb> positions;
    private:
        void detect_collision();
        void resolve__collisions();
    public:
        void update();
};
#endif // COLLISION_DETECTION_H_INCLUDED
