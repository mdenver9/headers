#pragma once

#include "../bedrock/actor/Actor"


using namespace AnimationComponent;

class ChildAnimationComponentInfo {

public:

    void setDirty(void);
    void getAnimationComponent(Actor &, unsigned short, AttachableSlotIndex);
};
