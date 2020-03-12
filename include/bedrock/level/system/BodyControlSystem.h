#pragma once

#include "ITickingSystem.h"
#include "../../../unmapped/EntityRegistry.h"


class BodyControlSystem : ITickingSystem {

public:
    virtual void tick(EntityRegistry &);
    ~BodyControlSystem();
    BodyControlSystem();
};
