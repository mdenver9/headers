#pragma once

class PetSleepWithOwnerGoal : MoveToBlockGoal {

public:
    static long PetSleepWithOwnerGoal::SETTLE_TICKS;
    static long PetSleepWithOwnerGoal::WAIT_TICKS;

    virtual ~PetSleepWithOwnerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _nextStartTick(void);
    virtual void _moveToBlock(void);
    virtual void findNearestBlock(void);

    void PetSleepWithOwnerGoal(Mob &, float, int, int, float);
};
