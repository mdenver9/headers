#pragma once

class TopSnowBlock : HeavyBlock {

    virtual void TopSnowBlock::~TopSnowBlock();
    virtual void TopSnowBlock::~TopSnowBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getStateFromLegacyData(unsigned short)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void isObstructingChests(BlockSource &, BlockPos const&)const;
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
    virtual void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    virtual void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    virtual void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& ()(BlockPos const&)> const&, BlockPos const&)const;
    virtual void getLightEmission(Block const&)const;
    virtual void shouldRandomTick(void)const;
    virtual void hasVariableLighting(void)const;
    virtual void isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void canProvideSupport(Block const&, unsigned char, BlockSupportType)const;
    virtual void canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getConnectedDirections(Block const&, BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    virtual void isCropBlock(void)const;
    virtual void isStemBlock(void)const;
    virtual void isContainerBlock(void)const;
    virtual void isCraftingBlock(void)const;
    virtual void isInteractiveBlock(void)const;
    virtual void isWaterBlocking(void)const;
    virtual void isHurtableBlock(void)const;
    virtual void isFenceBlock(void)const;
    virtual void isFenceGateBlock(void)const;
    virtual void isThinFenceBlock(void)const;
    virtual void isWallBlock(void)const;
    virtual void isStairBlock(void)const;
    virtual void isSlabBlock(void)const;
    virtual void isDoorBlock(void)const;
    virtual void isRailBlock(void)const;
    virtual void isButtonBlock(void)const;
    virtual void canHurtAndBreakItem(void)const;
    virtual void isSignalSource(void)const;
    virtual void canBeOriginalSurface(void)const;
    virtual void isValidAuxValue(int)const;
    virtual void canFillAtPos(BlockSource &, BlockPos const&, Block const&)const;
    virtual void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    virtual void waterSpreadCausesSpawn(void)const;
    virtual void canContainLiquid(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
    virtual void canBeUsedInCommands(bool)const;
    virtual void getThickness(void)const;
    virtual void getFlexibility(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    virtual void movedByPiston(BlockSource &, BlockPos const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    virtual void updateEntityAfterFallOn(Actor &)const;
    virtual void isBounceBlock(void)const;
    virtual void ignoreEntitiesOnPistonMove(Block const&)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayConsumeFertilizer(BlockSource &)const;
    virtual void mayPick(void)const;
    virtual void mayPick(BlockSource &, Block const&, bool)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void tryToPlace(BlockSource &, BlockPos const&, Block const&, ActorBlockSyncMessage const*)const;
    virtual void breaksFallingBlocks(Block const&)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void spawnBurnResources(BlockSource &, float, float, float)const;
    virtual void getExplosionResistance(Actor *)const;
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void calcVariant(BlockSource &, BlockPos const&)const;
    virtual void isAttachedTo(BlockSource &, BlockPos const&, BlockPos&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void playerDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void canSurvive(BlockSource &, BlockPos const&)const;
    virtual void getExperienceDrop(Random &)const;
    virtual void canBeBuiltOver(BlockSource &, BlockPos const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void executeEvent(BlockSource &, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void hasTag(BlockSource &, BlockPos const&, Block const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    virtual void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(void)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual void pushesUpFallingBlocks(void)const;
    virtual void calcGroundFriction(Mob &, BlockPos const&)const;
    virtual void canHaveExtraData(void)const;
    virtual void hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void canSlide(BlockSource &, BlockPos const&)const;
    virtual void getIconYOffset(void)const;
    virtual void getRenderLayer(void)const;
    virtual void _ZNK11BlockLegacy18buildDescriptionIdB5cxx11ERK5Block;
    virtual void isAuxValueRelevantForPicking(void)const;
    virtual void getColor(Block const&)const;
    virtual void getColorAtPos(BlockSource &, BlockPos const&)const;
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    virtual void isSeasonTinted(Block const&, BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool, bool);
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers(void)const;
    virtual void getShadeBrightness(void)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getUIShape(Block const&, AABB &)const;
    virtual void telemetryVariant(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void canSpawnOn(void)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void init(void);
    virtual void setLightBlock(Brightness);
    virtual void setLightEmission(float);
    virtual void setExplodeable(float);
    virtual void setDestroyTime(float);
    virtual void setFriction(float);
    virtual void addProperty(BlockProperty);
    virtual void addState(ItemState const&);
    virtual void addState(ItemState const&, unsigned long);
    virtual void setAllowsRunes(bool);
    virtual void setMapColor(Color const&);
    virtual void canBeSilkTouched(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void setVisualShape(Vec3 const&, Vec3 const&);
    virtual void tryLegacyUpgrade(unsigned short)const;
    virtual void dealsContactDamage(Actor const&, Block const&, bool)const;
    virtual void getDustColor(Block const&)const;
    virtual void _ZNK12TopSnowBlock19getDustParticleNameB5cxx11ERK5Block;
    virtual void falling(void)const;
    virtual void onLand(BlockSource &, BlockPos const&)const;
    virtual void isFreeToFall(BlockSource &, BlockPos const&)const;
    virtual void startFalling(BlockSource &, BlockPos const&, Block const*, bool)const;
}