#pragma once

class Dolphin : WaterAnimal {

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual void hasComponent(Util::HashString const&)const;
    virtual void Dolphin::~Dolphin();
    virtual void Dolphin::~Dolphin();
    virtual void reset(void);
    virtual void getOnDeathExperience(void);
    virtual void getOwnerEntityType(void);
    virtual void remove(void);
    virtual void setPos(Vec3 const&);
    virtual void getPos(void)const;
    virtual void getPosOld(void)const;
    virtual void getPosExtrapolated(float)const;
    virtual void getAttachPos(ActorLocation, float)const;
    virtual void getFiringPos(void)const;
    virtual void setRot(Vec2 const&);
    virtual void move(Vec3 const&);
    virtual void getInterpolatedRidingPosition(float)const;
    virtual void getInterpolatedBodyRot(float)const;
    virtual void getInterpolatedHeadRot(float)const;
    virtual void getInterpolatedBodyYaw(float)const;
    virtual void getYawSpeedInDegreesPerSecond(void)const;
    virtual void getInterpolatedWalkAnimSpeed(float)const;
    virtual void getInterpolatedRidingOffset(float)const;
    virtual void checkBlockCollisions(AABB const&);
    virtual void checkBlockCollisions(void);
    virtual void breaksFallingBlocks(void)const;
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void moveRelative(float, float, float, float);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void tryTeleportTo(Vec3 const&, bool, bool, int, int);
    virtual void chorusFruitTeleport(Vec3 &);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void getAddPacket(void);
    virtual void normalTick(void);
    virtual void baseTick(void);
    virtual void rideTick(void);
    virtual void positionRider(Actor&, float);
    virtual void getRidingHeight(void);
    virtual void startRiding(Actor &);
    virtual void addRider(Actor &);
    virtual void flagRiderToRemove(Actor&);
    virtual void getExitTip(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, InputMode)const;
    virtual void intersects(Vec3 const&, Vec3 const&)const;
    virtual void isFree(Vec3 const&, float);
    virtual void isFree(Vec3 const&);
    virtual void isInWall(void)const;
    virtual void isInvisible(void)const;
    virtual void canShowNameTag(void)const;
    virtual void canExistInPeaceful(void)const;
    virtual void setNameTagVisible(bool);
    virtual void _ZNK5Actor10getNameTagB5cxx11Ev;
    virtual void getNameTagAsHash(void)const;
    virtual void _ZNK5Actor19getFormattedNameTagB5cxx11Ev;
    virtual void filterFormattedNameTag(UIProfanityContext const&);
    virtual void setNameTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void getAlwaysShowNameTag(void)const;
    virtual void setScoreTag(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    virtual void _ZNK5Actor11getScoreTagB5cxx11Ev;
    virtual void isInWater(void)const;
    virtual void hasEnteredWater(void)const;
    virtual void isImmersedInWater(void)const;
    virtual void isInWaterOrRain(void)const;
    virtual void isInLava(void)const;
    virtual void isUnderLiquid(MaterialType)const;
    virtual void isOverWater(void)const;
    virtual void makeStuckInBlock(float);
    virtual void getCameraOffset(void)const;
    virtual void getShadowHeightOffs(void);
    virtual void getShadowRadius(void)const;
    virtual void getHeadLookVector(float);
    virtual void canSeeInvisible(void)const;
    virtual void canSee(Actor const&)const;
    virtual void canSee(Vec3 const&)const;
    virtual void isSkyLit(float);
    virtual void getBrightness(float)const;
    virtual void interactPreventDefault(void);
    virtual void playerTouch(Player &);
    virtual void onAboveBubbleColumn(bool);
    virtual void onInsideBubbleColumn(bool);
    virtual void isImmobile(void)const;
    virtual void isSilent(void);
    virtual void isPickable(void);
    virtual void isFishable(void)const;
    virtual void isSleeping(void)const;
    virtual void isShootable(void);
    virtual void isSneaking(void)const;
    virtual void setSneaking(bool);
    virtual void isBlocking(void)const;
    virtual void isDamageBlocked(ActorDamageSource const&)const;
    virtual void isAlive(void)const;
    virtual void isOnFire(void)const;
    virtual void isOnHotBlock(void)const;
    virtual void isCreativeModeAllowed(void);
    virtual void isSurfaceMob(void)const;
    virtual void isTargetable(void)const;
    virtual void canAttack(Actor*, bool)const;
    virtual void setTarget(Actor *);
    virtual void findAttackTarget(void);
    virtual void isValidTarget(Actor*)const;
    virtual void attack(Actor &);
    virtual void performRangedAttack(Actor&, float);
    virtual void adjustDamageAmount(int &)const;
    virtual void getEquipmentCount(void)const;
    virtual void setOwner(ActorUniqueID);
    virtual void setSitting(bool);
    virtual void onTame(void);
    virtual void onFailedTame(void);
    virtual void getInventorySize(void)const;
    virtual void getEquipSlots(void)const;
    virtual void getChestSlots(void)const;
    virtual void setStanding(bool);
    virtual void canPowerJump(void)const;
    virtual void setCanPowerJump(bool);
    virtual void isJumping(void)const;
    virtual void isEnchanted(void)const;
    virtual void rideJumped(void);
    virtual void rideLanded(Vec3 const&, Vec3 const&);
    virtual void shouldRender(void)const;
    virtual void isInvulnerableTo(ActorDamageSource const&)const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void animateHurt(void);
    virtual void doFireHurt(int);
    virtual void onLightningHit(void);
    virtual void onBounceStarted(BlockPos const&, Block const&);
    virtual void feed(int);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getPickRadius(void);
    virtual void spawnAtLocation(int, int);
    virtual void spawnAtLocation(int, int, float);
    virtual void spawnAtLocation(Block const&, int);
    virtual void spawnAtLocation(Block const&, int, float);
    virtual void spawnAtLocation(ItemStack const&, float);
    virtual void despawn(void);
    virtual void killed(Actor&);
    virtual void awardKillScore(Actor&, int);
    virtual void setArmor(ArmorSlot, ItemStack const&);
    virtual void getArmor(ArmorSlot)const;
    virtual void getArmorMaterialTypeInSlot(ArmorSlot)const;
    virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const;
    virtual void getArmorColorInSlot(ArmorSlot, int)const;
    virtual void setEquippedSlot(ArmorSlot, int, int);
    virtual void setEquippedSlot(ArmorSlot, ItemStack const&);
    virtual void getCarriedItem(void)const;
    virtual void setCarriedItem(ItemStack const&);
    virtual void setOffhandSlot(ItemStack const&);
    virtual void getEquippedTotem(void)const;
    virtual void consumeTotem(void);
    virtual void save(CompoundTag &);
    virtual void saveWithoutId(CompoundTag &);
    virtual void load(CompoundTag const&, DataLoadHelper &);
    virtual void loadLinks(CompoundTag const&, std::vector<ActorLink, std::allocator<ActorLink>> &, DataLoadHelper &);
    virtual void getEntityTypeId(void)const;
    virtual void queryEntityRenderer(void)const;
    virtual void getSourceUniqueID(void)const;
    virtual void setOnFire(int);
    virtual void getHandleWaterAABB(void)const;
    virtual void handleInsidePortal(BlockPos const&);
    virtual void getPortalCooldown(void)const;
    virtual void getPortalWaitTime(void)const;
    virtual void getDimensionId(void)const;
    virtual void canChangeDimensions(void)const;
    virtual void changeDimension(AutomaticID<Dimension, int>, bool);
    virtual void changeDimension(ChangeDimensionPacket const&);
    virtual void getControllingPlayer(void)const;
    virtual void checkFallDamage(float, bool);
    virtual void causeFallDamage(float);
    virtual void handleFallDistanceOnServer(float, bool);
    virtual void playSynchronizedSound(LevelSoundEvent, Vec3 const&, Block const&, bool);
    virtual void playSynchronizedSound(LevelSoundEvent, Vec3 const&, int, bool);
    virtual void onSynchedDataUpdate(int);
    virtual void canAddRider(Actor&)const;
    virtual void canBePulledIntoVehicle(void)const;
    virtual void inCaravan(void)const;
    virtual void isLeashableType(void);
    virtual void tickLeash(void);
    virtual void sendMotionPacketIfNeeded(void);
    virtual void canSynchronizeNewEntity(void)const;
    virtual void stopRiding(bool, bool, bool);
    virtual void startSwimming(void);
    virtual void stopSwimming(void);
    virtual void buildDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void getCommandPermissionLevel(void)const;
    virtual void getMutableAttribute(Attribute const&);
    virtual void getAttribute(Attribute const&)const;
    virtual void getDeathTime(void)const;
    virtual void heal(int);
    virtual void isInvertedHealAndHarm(void)const;
    virtual void canBeAffected(int)const;
    virtual void canBeAffected(MobEffectInstance const&)const;
    virtual void canBeAffectedByArrow(MobEffectInstance const&)const;
    virtual void onEffectAdded(MobEffectInstance &);
    virtual void onEffectUpdated(MobEffectInstance const&);
    virtual void onEffectRemoved(MobEffectInstance &);
    virtual void getAnimationComponent(void);
    virtual void openContainerComponent(Player &);
    virtual void swing(void);
    virtual void useItem(ItemStack &, ItemUseMethod, bool);
    virtual void hasOutputSignal(unsigned char)const;
    virtual void getOutputSignal(void)const;
    virtual void getDebugText(std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    virtual void getMapDecorationRotation(void)const;
    virtual void getRiderYRotation(Actor const&)const;
    virtual void getYHeadRot(void)const;
    virtual void isWorldBuilder(void);
    virtual void isCreative(void)const;
    virtual void isAdventure(void)const;
    virtual void add(ItemStack &);
    virtual void drop(ItemStack const&, bool);
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void canDestroyBlock(Block const&)const;
    virtual void setAuxValue(int);
    virtual void setSize(float, float);
    virtual void getLifeSpan(void)const;
    virtual void onOrphan(void);
    virtual void wobble(void);
    virtual void wasHurt(void);
    virtual void startSpinAttack(void);
    virtual void stopSpinAttack(void);
    virtual void setDamageNearbyMobs(bool);
    virtual void renderDebugServerState(Options const&);
    virtual void reloadLootTable(void);
    virtual void reloadLootTable(EquipmentTableDescription const*);
    virtual void getDeletionDelayTimeSeconds(void)const;
    virtual void kill(void);
    virtual void die(ActorDamageSource const&);
    virtual void shouldTick(void)const;
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void canMakeStepSound(void)const;
    virtual void outOfWorld(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void markHurt(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void _playFlySound(BlockPos const&, Block const&);
    virtual void _makeFlySound(void)const;
    virtual void checkInsideBlocks(float);
    virtual void pushOutOfBlocks(Vec3 const&);
    virtual void updateWaterState(void);
    virtual void doWaterSplashEffect(void);
    virtual void spawnTrailBubbles(void);
    virtual void updateInsideBlock(void);
    virtual void getLootTable(void);
    virtual void getDefaultLootTable(void);
    virtual void _removeRider(ActorUniqueID const&, bool, bool);
    virtual void _onSizeUpdated(void);
    virtual void _doAutoAttackOnTouch(Actor&);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void spawnAnim(void);
    virtual void setSleeping(bool);
    virtual void isSprinting(void)const;
    virtual void setSprinting(bool);
    virtual void playAmbientSound(void);
    virtual void getAmbientSound(void);
    virtual void getAmbientSoundPostponeTicks(void);
    virtual void getItemInHandIcon(ItemStack const&, int);
    virtual void getSpeed(void)const;
    virtual void setSpeed(float);
    virtual void getJumpPower(void)const;
    virtual void hurtEffects(ActorDamageSource const&, int, bool, bool);
    virtual void getMeleeWeaponDamageBonus(Mob*);
    virtual void getMeleeKnockbackBonus(void);
    virtual void travel(float, float, float);
    virtual void applyFinalFriction(float, bool);
    virtual void updateWalkAnim(void);
    virtual void aiStep(void);
    virtual void pushActors(void);
    virtual void lookAt(Actor *, float, float);
    virtual void isLookingAtAnEntity(void);
    virtual void checkSpawnRules(bool);
    virtual void checkSpawnObstruction(void)const;
    virtual void shouldDespawn(void)const;
    virtual void getAttackAnim(float);
    virtual void getItemUseDuration(void);
    virtual void getItemUseStartupProgress(void);
    virtual void getItemUseIntervalProgress(void);
    virtual void getItemuseIntervalAxis(void);
    virtual void getTimeAlongSwing(void);
    virtual void ate(void);
    virtual void getMaxHeadXRot(void);
    virtual void getLastHurtByMob(void);
    virtual void setLastHurtByMob(Mob*);
    virtual void getLastHurtByPlayer(void);
    virtual void setLastHurtByPlayer(Player *);
    virtual void getLastHurtMob(void);
    virtual void setLastHurtMob(Actor *);
    virtual void isAlliedTo(Mob*);
    virtual void doHurtTarget(Actor *);
    virtual void canBeControlledByRider(void);
    virtual void leaveCaravan(void);
    virtual void joinCaravan(Mob*);
    virtual void hasCaravanTail(void)const;
    virtual void getCaravanHead(void)const;
    virtual void getArmorValue(void);
    virtual void getArmorCoverPercentage(void)const;
    virtual void hurtArmor(int);
    virtual void containerChanged(int);
    virtual void updateEquipment(void);
    virtual void clearEquipment(void);
    virtual void getAllArmor(void)const;
    virtual void getAllArmorID(void)const;
    virtual void getAllHand(void)const;
    virtual void getAllEquipment(void)const;
    virtual void getArmorTypeHash(void);
    virtual void sendInventory(bool);
    virtual void sendArmor(void);
    virtual void getDamageAfterMagicAbsorb(ActorDamageSource const&, int);
    virtual void createAIGoals(void);
    virtual void onBorn(Actor &, Actor &);
    virtual void setItemSlot(EquipmentSlot, ItemStack const&);
    virtual void goDownInWater(void);
    virtual void setTransitioningSitting(bool);
    virtual void attackAnimation(Actor *, float);
    virtual void getAttackTime(void);
    virtual void _getWalkTargetValue(BlockPos const&);
    virtual void canExistWhenDisallowMob(void)const;
    virtual void useNewAi(void)const;
    virtual void ascendLadder(void);
    virtual void ascendScaffolding(void);
    virtual void descendScaffolding(void);
    virtual void initBodyControl(void);
    virtual void jumpFromGround(void);
    virtual void updateAi(void);
    virtual void newServerAiStep(void);
    virtual void _serverAiMobStep(void);
    virtual void getDamageAfterEnchantReduction(ActorDamageSource const&, int);
    virtual void getDamageAfterArmorAbsorb(ActorDamageSource const&, int);
    virtual void dropEquipment(ActorDamageSource const&, int);
    virtual void dropEquipment(void);
    virtual void dropBags(void);
    virtual void dropContainer(void);
    virtual void tickDeath(void);
    virtual void _endJump(void);
    virtual void updateGliding(void);
    virtual void _allowAscendingScaffolding(void)const;
}
