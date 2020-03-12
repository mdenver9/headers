#pragma once

#include "BehaviorNode.h"


class SelectorBehaviorNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~SelectorBehaviorNode();
    virtual void initializeFromDefinition(Actor &);
    SelectorBehaviorNode();
};
