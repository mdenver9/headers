#pragma once

class DragonDeathGoal : Goal {

public:
    virtual ~DragonDeathGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void DragonDeathGoal(EnderDragon &);
};
