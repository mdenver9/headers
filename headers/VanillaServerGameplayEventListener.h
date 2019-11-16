#pragma once

class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

    virtual ~VanillaServerGameplayEventListener();
    virtual ~VanillaServerGameplayEventListener();
    virtual void onActorAttack(Actor &, Actor &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onActorMove(Actor &, Vec3 const&);
    virtual void onActorTick(Actor &);
    virtual void onActorSneakChanged(Actor &, bool);
    virtual void onActorStartRiding(Actor &, Actor &);
    virtual void onActorStopRiding(Actor &, bool, bool, bool);
    virtual void onActorDeath(Actor &, ActorDamageSource const&);
    virtual void onActorDefinitionEventTriggered(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void onActorUseItem(Actor &, ItemInstance const&, ItemUseMethod);
    virtual void onActorUseItemOn(Actor &, ItemDescriptor const&, BlockPos const&, unsigned char);
    virtual void onActorCreated(Actor &);
    virtual void onProjectileHit(Actor &, HitResult const&);
    virtual void onActorTeleported(Actor &);
    virtual void onActorAttackedActor(Actor &, Actor &);
    virtual void onActorAcquiredItem(Actor &, ItemInstance const&, unsigned int, ItemAcquisitionMethod, Actor*);
    virtual void onActorPlacedItem(Actor &, ItemInstance const&);
    virtual void onActorDroppedItem(Actor &, ItemInstance const&);
    virtual void onActorCarriedItemChanged(Actor &, ItemInstance const&, ItemInstance const&, HandSlot);
    virtual void onActorEquippedArmor(Actor &, ItemInstance const&, ArmorSlot);
    virtual void onActorRemoved(Actor &);
    virtual void onActorMobInteraction(Actor &, MinecraftEventing::InteractionType, ActorType);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void ;
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onBlockDestroyedByPlayer(Player &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, BlockPos const&);
    virtual void onBlockMovedByPiston(BlockPos const&, BlockPos const&, PistonBlockActor::PistonState);
    virtual void onBlockDestructionStopped(Player &, BlockPos const&, int);
    virtual void onBlockDestructionStarted(Player &, BlockPos const&);
    virtual void onBlockInteractedWith(Player &, BlockPos const&);
    virtual void onBlockExploded(BlockPos const&, Block const&, Actor *);
    virtual void onBlockModified(BlockPos const&, Block const&, Block const&);
    virtual void onUnknownBlockReceived(Level &, NewBlockID const&, unsigned short);
    virtual void ;
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void onPlayerAwardAchievement(Player &, MinecraftEventing::AchievementIds);
    virtual void onPlayerPortalBuilt(Player &, AutomaticID<Dimension, int>);
    virtual void onPlayerPortalUsed(Player &, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>);
    virtual void onPlayerCaravanChanged(Actor const&, int);
    virtual void onPlayerSaved(Player &);
    virtual void onPlayerInput(Player &, MoveInputHandler &);
    virtual void onPlayerTurn(Player &, Vec2 &);
    virtual void onStartDestroyBlock(Player &, BlockPos const&, unsigned char &);
    virtual void onPlayerAction(Player &, PlayerActionType, BlockPos const&, int);
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onLocalPlayerDeath(IClientInstance &, LocalPlayer &);
    virtual void onLocalPlayerRespawn(IClientInstance &, LocalPlayer &);
    virtual void onPlayerMove(Player &);
    virtual void onPlayerTick(Player &);
    virtual void onPlayerStartRiding(Player &, Actor &);
    virtual void onPlayerStopRiding(Player &, bool, bool, bool);
    virtual void onPlayerCreated(LocalPlayer &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    virtual void onPlayerTeleported(Player &);
    virtual void onPlayerAttackedActor(Player &, Actor &);
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void onPlayerDestroyedBlock(Player &, int, int, int);
    virtual void onPlayerDestroyedBlock(Player &, BlockLegacy const&);
    virtual void onPlayerOnGround(Player &);
    virtual void onPlayerEquippedArmor(Player &, ItemDescriptor const&);
    virtual void onPlayerEnchantedItem(Player &, ItemStack const&, ItemEnchants const&);
    virtual void onPlayerNamedItem(Player &, ItemDescriptor const&);
    virtual void onPlayerItemUseInteraction(Player &, ItemInstance const&);
    virtual void onPlayerItemPlaceInteraction(Player &, ItemInstance const&);
    virtual void onPlayerCraftedItem(Player &, ItemInstance const&, bool, bool, bool, int, int, int, bool, bool, std::vector<short, std::allocator<short>> const&);
    virtual void onPlayerItemEquipped(Player &, ItemInstance const&, int);
    virtual void ;
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void `non-virtual thunk to'VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void onLevelInitialized(Level &);
    virtual void onLevelSaveData(Level &, CompoundTag &);
    virtual void onLevelAddedPlayer(Level &, Player &);
    virtual void onLevelRemovedPlayer(Level &, Player &);
    virtual void onLevelRemovedActor(Level &, Actor &);
    virtual void onLevelAddedActor(Level &, Actor &);
    virtual void onLevelTick(void);
    virtual void onLevelWeatherChange(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, bool);
}
