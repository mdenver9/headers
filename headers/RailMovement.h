#pragma once

class RailMovement {

public:
    static long RailMovement::EXITS;


    void getPosOffs(Actor &, Vec3 &, Vec3, float);
    void getPos(Actor &, Vec3 &, Vec3);
};
