#pragma once

class WaitDefinition : BehaviorDefinition {

    virtual void WaitDefinition::~WaitDefinition();
    virtual void WaitDefinition::~WaitDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}