#pragma once

class EndermanTakeBlockGoal : Goal {

public:
    virtual ~EndermanTakeBlockGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void EndermanTakeBlockGoal(EnderMan &);
};
