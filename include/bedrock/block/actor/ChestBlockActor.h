#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../../unmapped/ContainerContentChangeListener"
#include "../../item/ItemStack"
#include "../../nbt/CompoundTag"


class ChestBlockActor : RandomizableBlockActorFillingContainer {

public:
    virtual ChestBlockActor::~ChestBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void onMove(void);
    virtual void onRemoved(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void clearCache(void);
    virtual void onNeighborChanged(BlockSource &, BlockPos const&);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getDebugText(std::vector<std::string, std::allocator<std::string>> &, BlockPos const&);
    virtual void getName[abi:cxx11](void)const;
    virtual void getContainer(void);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void startOpen(Player &);
    virtual void getContainerSize(void)const;
    virtual void getMaxStackSize(void)const;
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void loadItems(CompoundTag const&, Level &);
    virtual void saveItems(CompoundTag &)const;
    virtual void stopOpen(Player &);
    virtual void clearInventory(int);
    virtual void setContainerChanged(int);
    virtual bool canPushInItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual bool canPullOutItem(BlockSource &, int, int, ItemInstance const&)const;
    virtual void addContentChangeListener(ContainerContentChangeListener *);
    virtual void removeContentChangeListener(ContainerContentChangeListener *);
    virtual void playOpenSound(BlockSource &);
    virtual void playCloseSound(BlockSource &);
    virtual void _canOpenThis(BlockSource &)const;
    virtual void getObstructionAABB(void)const;
    virtual void _detectEntityObstruction(BlockSource &)const;

    ChestBlockActor(BlockActorType, std::string const&, BlockActorRendererId, BlockPos const&, bool);
    void createChestBlockEntity(BlockPos const&);
    void createTrappedChestBlockEntity(BlockPos const&);
    bool isLargeChest(void)const;
    void denyNotifyPlayersChange(void);
    void _unpair(void);
    void _saveClientSideState(CompoundTag &)const;
    bool canPairWith(BlockActor *, BlockSource &);
    void pairWith(ChestBlockActor*, bool);
    void _validatePairedChest(BlockSource &);
    void _tickOpenLid(BlockSource &);
    void _getCenter(float &, float &, float &);
    void getOpenCount(void)const;
    void forceCloseChest(BlockSource &);
    void _closeChest(BlockSource &, Player *);
    void _playerClosedContainer(Player &);
    void _tryToPairWith(BlockSource &, BlockPos const&);
    void _legacyDetectBlockObstruction(BlockSource &)const;
    void _detectBlockObstruction(BlockSource &)const;
    bool isMainSubchest(void);
    bool canOpen(BlockSource &)const;
    void unpair(BlockSource &);
    bool isTrappedChest(void)const;
    void getPairedChestPosition(void);
    void getModelOffsetX(void);
    void openBy(Player &);
    void getOpenness(void)const;
    void setOpenness(float);
    void getOldOpenness(void)const;
    void setOldOpenness(float);
    void onMove(BlockSource &, BlockPos const&, BlockPos const&);
    void getIsGlobalChest(void);
    bool isFindable(void)const;
    void setFindable(bool);
};
