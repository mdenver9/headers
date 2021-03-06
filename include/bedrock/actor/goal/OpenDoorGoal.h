#pragma once

#include "DoorInteractGoal.h"
#include <string>


class OpenDoorGoal : public DoorInteractGoal {

public:
    virtual ~OpenDoorGoal(); // _ZN12OpenDoorGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN12OpenDoorGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN12OpenDoorGoal16canContinueToUseEv
    virtual void start(); // _ZN12OpenDoorGoal5startEv
    virtual void stop(); // _ZN12OpenDoorGoal4stopEv
    virtual void tick(); // _ZN12OpenDoorGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK12OpenDoorGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    OpenDoorGoal(Mob &, bool); // _ZN12OpenDoorGoalC2ER3Mobb
};
