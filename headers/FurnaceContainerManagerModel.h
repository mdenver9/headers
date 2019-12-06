#pragma once

class FurnaceContainerManagerModel : ContainerManagerModel {

public:
    virtual ~FurnaceContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);

    void FurnaceContainerManagerModel(ContainerID, Player &, BlockPos const&);
    void FurnaceContainerManagerModel(Util::HashString const&, ContainerType, BlockActorType, ContainerID, Player &, BlockPos const&);
    void _getIngredientNameFromType(Util::HashString const&);
    void _getFurnaceEntity(void);
    void _updateResultSlotInfo(void);
    void getBurnProgress(int);
    void getLitProgress(int);
    bool isFinished(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &, int &, int &);
    bool isFurnaceValid(float);
    void grantExperienceForSmelting(ItemInstance const&, int);
    void fireItemSmeltedEvent(ItemDescriptor const&);
    void fireItemAcquiredEvent(ItemInstance const&, int);
    void getOutputId(void)const;
    void getBlockPos(void)const;
    void getBlockActorType(void)const;
    void _onFurnaceIngredientSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFurnaceFuelSlotChanged(int, ItemStack const&, ItemStack const&);
    void _onFurnaceResultSlotChanged(int, ItemStack const&, ItemStack const&);
};
