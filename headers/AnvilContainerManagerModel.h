#pragma once

class AnvilContainerManagerModel : ContainerManagerModel {

public:
    static long AnvilContainerManagerModel::INPUT_SLOT;
    static long AnvilContainerManagerModel::MATERIAL_SLOT;
    static long AnvilContainerManagerModel::RESULT_SLOT;

    virtual ~AnvilContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    void AnvilContainerManagerModel(ContainerID, Player &, BlockPos const&);
    bool isAnvilValid(float);
    void applyDamageToAnvilBlock(void);
    void fireItemCraftedEvent(ItemInstance const&);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void sendCraftedPacket(CraftingEventPacket &);
    void getBlockPos(void)const;
};
