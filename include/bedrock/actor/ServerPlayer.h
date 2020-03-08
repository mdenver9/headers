#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/MobEffectInstance"
#include "../../unmapped/InventoryTransaction"
#include "../item/ItemStack"
#include "../../unmapped/ActorUniqueID"
#include "../level/chunksource/ChunkSource"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "damagesource/ActorDamageSource"
#include "../network/packet/Packet"
#include "../level/Level"
#include "../../unmapped/ComplexInventoryTransaction"
#include "../container/manager/IContainerManager"
#include "../../unmapped/Dimension"
#include "../../unmapped/Tick"
#include "../text/TextObjectRoot"
#include "../../unmapped/Vec3"


class ServerPlayer : Player {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual ServerPlayer::~ServerPlayer();
    virtual void normalTick(void);
    virtual bool isValidTarget(Actor *)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void setArmor(ArmorSlot, ItemStack const&);
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual bool canChangeDimensions(void)const;
    virtual void changeDimension(AutomaticID<Dimension, int>, bool);
    virtual void getControllingPlayer(void)const;
    virtual void checkFallDamage(float, bool);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void onEffectAdded(MobEffectInstance &);
    virtual void onEffectUpdated(MobEffectInstance const&);
    virtual void onEffectRemoved(MobEffectInstance &);
    virtual void die(ActorDamageSource const&);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void aiStep(void);
    virtual void hurtArmor(int);
    virtual void sendInventory(bool);
    virtual void prepareRegion(ChunkSource &);
    virtual void destroyRegion(void);
    virtual void suspendRegion(void);
    virtual void changeDimensionWithCredits(AutomaticID<Dimension, int>);
    virtual void tickWorld(Tick const&);
    virtual void frameUpdate(FrameUpdateContextBase &);
    virtual void checkMovementStats(Vec3 const&);
    virtual void setPermissions(CommandPermissionLevel);
    virtual void openContainer(BlockPos const&);
    virtual void openContainer(ActorUniqueID const&);
    virtual void openFurnace(BlockPos const&);
    virtual void openBlastFurnace(BlockPos const&);
    virtual void openSmoker(BlockPos const&);
    virtual void openEnchanter(BlockPos const&);
    virtual void openAnvil(BlockPos const&);
    virtual void openGrindstone(BlockPos const&);
    virtual void openBrewingStand(BlockPos const&);
    virtual void openHopper(BlockPos const&);
    virtual void openHopper(ActorUniqueID const&);
    virtual void openDispenser(BlockPos const&, bool);
    virtual void openBeacon(BlockPos const&);
    virtual void openPortfolio(void);
    virtual void openCommandBlock(BlockPos const&);
    virtual void openCommandBlockMinecart(ActorUniqueID const&);
    virtual void openHorseInventory(ActorUniqueID const&);
    virtual void openTrading(ActorUniqueID const&, bool);
    virtual void openNpcInteractScreen(Actor &);
    virtual void openInventory(void);
    virtual void openStructureEditor(BlockPos const&);
    virtual void openLabTable(BlockPos const&);
    virtual void openElementConstructor(BlockPos const&);
    virtual void openCompoundCreator(BlockPos const&);
    virtual void openMaterialReducer(BlockPos const&);
    virtual void displayLocalizableMessage(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    virtual void displayTextObjectMessage(TextObjectRoot const&, std::string const&, std::string const&);
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void stopSleepInBed(bool, bool);
    virtual bool isHostingPlayer(void)const;
    virtual bool isLoading(void)const;
    virtual bool isPlayerInitialized(void)const;
    virtual void setPlayerGameType(GameType);
    virtual void setContainerData(IContainerManager &, int, int);
    virtual void slotChanged(IContainerManager &, int, ItemStack const&, ItemStack const&, bool);
    virtual void refreshContainer(IContainerManager &);
    virtual void deleteContainerManager(void);
    virtual bool isPositionRelevant(AutomaticID<Dimension, int>, BlockPos const&);
    virtual bool isEntityRelevant(Actor const&);
    virtual bool isTeacher(void)const;
    virtual void onSuspension(void);
    virtual void onLinkedSlotsChanged(void);
    virtual void sendInventoryTransaction(InventoryTransaction const&)const;
    virtual void sendComplexInventoryTransaction(std::unique_ptr<ComplexInventoryTransaction, std::default_delete<ComplexInventoryTransaction>>)const;
    virtual void sendNetworkPacket(Packet &)const;
    virtual void getPlayerEventCoordinator(void);
    virtual void getMoveInputHandler(void);
    virtual void getInputMode(void)const;
    virtual void getPlayMode(void)const;
    virtual void reportMovementTelemetry(MovementEventType);

    ServerPlayer(Level &, PacketSender &, NetworkHandler &, ClientBlobCache::Server::ActiveTransfersManager &, GameType, NetworkIdentifier const&, unsigned char, std::function<void ()(ServerPlayer&)>, mce::UUID, std::string const&, std::unique_ptr<Certificate, std::default_delete<Certificate>>, int);
    void updateChunkPublisherView(Vec3 const&, float);
    void _updateNearbyActors(void);
    void _getReadOnlyChunkCount(void);
    void recoverR5LostInventoryAndXP(void);
    void _getServerPlayerEventCoordinator(void);
    void getInventoryMenu(void);
    void _nextContainerCounter(void);
    void _setContainerManager(std::shared_ptr<IContainerManager>);
    void doDeleteContainerManager(void);
    void selectItem(ItemStack const&, int const&);
    void findClientChunkRadius(unsigned int)const;
    void setClientChunkRadius(unsigned int);
    void disconnect(void);
    void setPlayerInput(float, float, bool, bool);
    void sendMobEffectPackets(void);
    void _getViewDistanceDeterminismBufferRadius(void)const;
    void _scanForNearbyActors(void);
    void _removeNearbyEntities(void);
    void setTeacher(void);
    void setLocalPlayerAsInitialized(void);
    void setLostDataTag(std::unique_ptr<CompoundTag, std::default_delete<CompoundTag>>);
    void getServerMoveInputHandler(void);
    void setInputMode(InputMode const&);
    void setPlayMode(ClientPlayMode const&);
    void checkCheating(Vec3 const&);
};
