#pragma once

#include <string>
#include "Goal.h"


class EndermanLeaveBlockGoal : public Goal {

public:
    virtual ~EndermanLeaveBlockGoal(); // _ZN22EndermanLeaveBlockGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN22EndermanLeaveBlockGoal6canUseEv
    virtual void tick(); // _ZN22EndermanLeaveBlockGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK22EndermanLeaveBlockGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    EndermanLeaveBlockGoal(EnderMan &); // _ZN22EndermanLeaveBlockGoalC2ER8EnderMan
};
