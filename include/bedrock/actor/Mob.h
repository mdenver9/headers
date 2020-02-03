#pragma once

class Mob : Actor {

public:
    static long PLAYER_HURT_EXPERIENCE_TIME;
    static long MAX_INACTIVITY_TIMER;
    static long ABSORPTION_FACTOR_MAX;
    static long ABSORPTION_FACTOR_MIN;
    static long TOTAL_ROLL_STEPS;
    static long REMOVE_RIDERS_DELAY;
    static long PLAYER_SWIMMING_SURFACE_OFFSET;
    static long GLIDING_FALL_RESET_DELTA;
    static long SLOW_FALL_GRAVITY;
    static long DEFAULT_GRAVITY;
    static long LADDER_CLIMB_SPEED;
    static long SCAFFOLDING_CLIMB_SPEED;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual void reloadHardcodedClient(Actor::InitializationMethod, VariantParameterList const&);
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual bool hasComponent(Util::HashString const&)const;
    virtual Mob::~Mob();
    virtual void getInterpolatedBodyRot(float)const;
    virtual void getInterpolatedHeadRot(float)const;
    virtual void getInterpolatedBodyYaw(float)const;
    virtual void getYawSpeedInDegreesPerSecond(void)const;
    virtual void blockedByShield(ActorDamageSource const&, Actor &);
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void normalTick(void);
    virtual void baseTick(void);
    virtual void rideTick(void);
    virtual void startRiding(Actor &);
    virtual void addRider(Actor &);
    virtual void playerTouch(Player &);
    virtual bool isImmobile(void)const;
    virtual bool isPickable(void);
    virtual bool isSleeping(void)const;
    virtual bool isShootable(void);
    virtual bool isBlocking(void)const;
    virtual bool isAlive(void)const;
    virtual bool isSurfaceMob(void)const;
    virtual void setTarget(Actor *);
    virtual void attack(Actor &);
    virtual bool canPowerJump(void)const;
    virtual bool isJumping(void)const;
    virtual void actuallyHurt(int, ActorDamageSource const*, bool);
    virtual void animateHurt(void);
    virtual void doFireHurt(int);
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void getArmorMaterialTypeInSlot(ArmorSlot)const;
    virtual void getArmorMaterialTextureTypeInSlot(ArmorSlot)const;
    virtual void getArmorColorInSlot(ArmorSlot, int)const;
    virtual void setEquippedSlot(ArmorSlot, int, int);
    virtual void setEquippedSlot(ArmorSlot, ItemStack const&);
    virtual void setOnFire(int);
    virtual void causeFallDamage(float);
    virtual bool canBePulledIntoVehicle(void)const;
    virtual void inCaravan(void)const;
    virtual void stopRiding(bool, bool, bool);
    virtual void buildDebugInfo(std::string &)const;
    virtual void getDeathTime(void)const;
    virtual void swing(void);
    virtual void getYHeadRot(void)const;
    virtual void renderDebugServerState(Options const&);
    virtual void kill(void);
    virtual void die(ActorDamageSource const&);
    virtual void updateEntitySpecificMolangVariables(RenderParams &);
    virtual void outOfWorld(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _playStepSound(BlockPos const&, Block const&);
    virtual void _removeRider(ActorUniqueID const&, bool, bool);
    virtual void _onSizeUpdated(void);
    virtual void knockback(Actor *, int, float, float, float, float, float);
    virtual void resolveDeathLoot(int, ActorDamageSource const&);
    virtual void spawnAnim(void);
    virtual void setSleeping(bool);
    virtual bool isSprinting(void)const;
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
    virtual bool isLookingAtAnEntity(void);
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
    virtual bool isAlliedTo(Mob*);
    virtual void doHurtTarget(Actor *);
    virtual bool canBeControlledByRider(void);
    virtual void leaveCaravan(void);
    virtual void joinCaravan(Mob*);
    virtual bool hasCaravanTail(void)const;
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
    virtual bool canExistWhenDisallowMob(void)const;
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

    Mob(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void registerAttributes(void);
    void _initHardCodedComponents(void);
    void calculateAmbientSoundTime(int);
    Mob(Level &);
    void resetAttributes(void);
    void playBornSound(void);
    void playSpawnSound(void);
    void createAI(std::vector<GoalDefinition, std::allocator<GoalDefinition>>);
    void stopAI(void);
    void getAmbientSoundPostponeTicksRange(void);
    void _isHeadInWater(void);
    void _isFloorDamaging(BlockPos const&);
    void _isNewEntityAttack(ActorDamageCause)const;
    void _tryApplyingLevitation(Vec3 &)const;
    void checkTotemDeathProtection(ActorDamageSource const&);
    bool hasBoundOrigin(void)const;
    void getBoundOrigin(void)const;
    void setBoundOrigin(BlockPos);
    void tickBlockDamage(void);
    void tickAttributes(void);
    void tickEffects(void);
    void _updateSprintingState(void);
    void frostWalk(void);
    bool isFrostWalking(void)const;
    void setInterpolation(bool);
    void lerpTo(Vec3 const&, Vec2 const&, float, int);
    void lerpToRotation(Vec2 const&, int);
    bool isGliding(void)const;
    void getTravelType(void);
    void calcMoveRelativeSpeed(Mob::TravelType);
    void getXxa(void)const;
    void getYya(void)const;
    void getZza(void)const;
    void getJumpMultiplier(void);
    void getJumpPrevention(void);
    void emitJumpPreventedEvent(BlockPos const&);
    void shouldApplyWaterGravity(void);
    void saveMainhand(void)const;
    void _saveArmor(void);
    void saveOffhand(void)const;
    bool isPregnant(void)const;
    void loadMainhand(ListTag const*);
    void loadOffhand(ListTag const*);
    void _loadArmor(ListTag const*);
    void _verifyAttributes(void);
    void setIsPregnant(bool);
    void _applyRidingRotationLimits(void);
    void _updateMobTravel(void);
    void updateAttackAnim(void);
    void setJumping(bool);
    bool isJumpOnBlockPrevented(BlockPos const&);
    bool canPickUpLoot(ItemStack const&)const;
    void snapToYHeadRot(float);
    void snapToYBodyRot(float);
    void setYHeadRot(float);
    void setRiderLockedBodyRot(float);
    void getRiderLockedBodyRot(void)const;
    void getRiderRotLimit(void)const;
    void setRiderRotLimit(float);
    void getGlidingTicks(void)const;
    bool isTransitioningSitting(void)const;
    bool isEating(void)const;
    void setEating(bool);
    void getEatCounter(void)const;
    void setEatCounter(int);
    void setWantsToBeJockey(bool);
    void wantsToBeJockey(void)const;
    void setJumpVelRedux(bool);
    void setSpeedModifier(float);
    void _doSprintParticleEffect(void);
    void getCurrentSwingDuration(void);
    void _getDamageAfterAbsorb(int, int);
    void getItemSlot(EquipmentSlot)const;
    void getFirstCaravanHead(void);
    void getCaravanSize(void)const;
    void _updateMobId(ActorUniqueID &);
    void getLastHurtMobTimestamp(void);
    void getLastHurtByMobTimestamp(void);
    void getNoActionTime(void)const;
    void setSpawnMethod(MobSpawnMethod);
    void getSpawnMethod(void);
    void onPlayerJump(int);
    void setXxa(float);
    void setYya(float);
    void setZza(float);
    void getYRotA(void)const;
    void setYRotA(float);
    void incrementArrowCount(int);
    void setNaturallySpawned(bool);
    bool isNaturallySpawned(void)const;
    void setSurfaceMob(bool);
    void _addSpeedBonus(mce::UUID const&, std::string const&, float);
    void _removeSpeedBonus(mce::UUID const&);
    void getFlightSpeed(void);
    void setFlightSpeed(float);
    void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    void getVillageLegacy(void)const;
    bool isLayingEgg(void)const;
    void setIsLayingEgg(bool);
    void getFrictionModifier(void)const;
    void setFrictionModifier(float);
    void getRollCounter(void)const;
    bool isRolling(void)const;
    void setRolling(bool);
    void setTargetCaptain(ActorUniqueID);
    void getTargetCaptain(void)const;
};
