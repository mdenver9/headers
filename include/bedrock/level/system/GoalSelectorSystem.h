#pragma once

#include "../../../unmapped/EntityContext"
#include "../../../unmapped/PrioritizedGoal"
#include "../../../unmapped/ActorComponent"
#include "../../../unmapped/EntityRegistry"
#include "../../../unmapped/GoalSelectorComponent"


class GoalSelectorSystem : ITickingSystem {

public:
    virtual GoalSelectorSystem::~GoalSelectorSystem();
    virtual void tick(EntityRegistry &);

    GoalSelectorSystem(void);
    void _tickGoalSelectorComponent(ViewedEntityContextT<EntityContext, FlagComponent<ActorTickedFlag>, ActorComponent, GoalSelectorComponent> &);
    void _tickGoal(std::vector<PrioritizedGoal, std::allocator<PrioritizedGoal>> &);
};
