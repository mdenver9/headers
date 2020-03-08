#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/actor/Actor"


class MountTamingComponent {

public:

    MountTamingComponent(MountTamingComponent&&);
    void getTemper(void);
    void getCounter(void);
    void getWaitCount(void)const;
    void getTemperMod(void)const;
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void tameToPlayer(Actor &, Player *, bool);
    void _sendTameEvents(Actor &, Player *)const;
    void becomeTame(Actor &, bool);
};
