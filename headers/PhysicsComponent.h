#pragma once

class PhysicsComponent {

public:

    void setAffectedByGravity(Actor &, bool);
    bool isAffectedByGravity(Actor const&)const;
    void setHasCollision(Actor &, bool);
    void PhysicsComponent(PhysicsComponent&&);
};