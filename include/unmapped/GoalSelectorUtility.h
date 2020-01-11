#pragma once

class GoalSelectorUtility {

public:

    bool canCoExist(PrioritizedGoal &, PrioritizedGoal &);
    bool canUseInSystem(PrioritizedGoal &, std::vector<PrioritizedGoal, std::allocator<PrioritizedGoal>> &);
    void tryStartGoals(std::vector<PrioritizedGoal, std::allocator<PrioritizedGoal>> &);
};