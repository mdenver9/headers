#pragma once

#include <string>
#include <vector>
#include <functional>


class Block {

public:
    static long SIZE_OFFSET;
    static std::string BLOCK_DESCRIPTION_PREFIX;

    ~Block();
    virtual void getRenderLayer()const;
    void getVariant()const;
    void getIconYOffset()const;
    bool canBeSilkTouched()const;
    bool canHaveExtraData()const;
    void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    void getDataDEPRECATED()const;
    void getPlacementFacingAllExceptAxisY(Actor &, BlockPos const&, float);
    void getIgnoresDestroyPermissions(Actor &, BlockPos const&)const;
    bool isAlphaTested()const;
    bool isEmpty()const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
//  void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    bool isDoor()const;
    void getDestroySpeed()const;
    void getThickness()const;
    void onFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    bool isThinFenceBlock()const;
    void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    bool isMotionBlockingBlock()const;
    bool canConnect(Block const&, unsigned char, Block const&)const;
    void getExtraRenderLayers()const;
    void shouldDispense(BlockSource &, Container &)const;
    void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const;
    void getBlockEntityType()const;
    void getMapColor(BlockSource &, BlockPos const&)const;
    void getOutline(BlockSource &, BlockPos const&, AABB &)const;
    void waterSpreadCausesSpawn()const;
    void getCreativeCategory()const;
    void getColorForParticle(BlockSource &, BlockPos const&, Block const&)const;
    bool isCropBlock()const;
    bool detachesOnPistonMove(BlockSource &, BlockPos const&)const;
    bool isSignalSource()const;
    void getFriction()const;
    bool canFillAtPos(BlockSource &, BlockPos const&)const;
    bool isRailBlock()const;
    void getTranslucency()const;
    bool hasTag(BlockSource &, BlockPos const&, Block const&, std::string const&)const;
    void getAABB(BlockSource &, BlockPos const&, AABB &, bool)const;
    bool isBounceBlock()const;
    bool canSlide(BlockSource &, BlockPos const&)const;
    bool isAuxValueRelevantForPicking()const;
    bool isSlabBlock()const;
    void getBurnOdds()const;
    bool hasRuntimeId()const;
    void attack(Player *, BlockPos const&)const;
    void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    bool hasVariableLighting()const;
//  bool hasProperty(BlockProperty)const; //TODO: incomplete function definition
    void getLight()const;
    void setFlammable(int, int)const;
    bool isContainerBlock()const;
    void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    void addAABBs(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    bool isStairBlock()const;
    bool isSolidBlockingBlock()const;
    void getLightEmission()const;
    void getConnectedDirections(BlockPos const&, BlockSource &, bool &, bool &, bool &, bool &)const;
    void getStateFromLegacyData(unsigned short)const;
    void getDefaultState()const;
    bool canSurvive(BlockSource &, BlockPos const&)const;
    bool breaksFallingBlocks()const;
    void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    bool isDoorBlock()const;
    bool canContainLiquid()const;
    void getParticleQuantityScalar()const;
    void playerDestroy(Player &, BlockPos const&)const;
    void shouldStopFalling(Actor &)const;
    void tryToPlace(BlockSource &, BlockPos const&, ActorBlockSyncMessage const*)const;
    bool isStrippable(Block const&)const;
    void getLegacyBlockPtr()const;
    bool isUnbreakable()const;
    void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool, AABB const&)const;
    bool isCraftingBlock()const;
    void getExplosionResistance(Actor *)const;
    bool hasState(ItemState const&)const;
    void getMappedFace(unsigned char)const;
    void playerWillDestroy(Player &, BlockPos const&)const;
    void movedByPiston(BlockSource &, BlockPos const&)const;
    void getProperties()const;
    void getMobToSpawn(SpawnConditions const&, BlockSource &)const;
    bool isWaterBlocking()const;
    void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    void addAABB(AABB const&, AABB const*, std::vector<AABB> &)const;
    void randomlyModifyPosition(BlockPos const&)const;
    void getExperienceDrop(Random &)const;
    void getAllowsRunes()const;
    bool isValidAuxValue(int)const;
    void getRenderLayer(BlockSource &, BlockPos const&)const;
    void shouldRandomTick()const;
    void shouldRandomTickExtraLayer()const;
    std::string buildDescriptionName()const;
//  bool canProvideSupport(unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    bool isButtonBlock()const;
    std::string getDescriptionId()const;
    void spawnBurnResources(BlockSource &, float, float, float)const;
    bool isHurtableBlock()const;
    void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    void getSerializationId()const;
    bool pushesOutItems()const;
    bool hasBlockEntity()const;
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    void getVisualShape(AABB &, bool)const;
    void mayConsumeFertilizer(BlockSource &)const;
    bool isStandingSign()const;
    void onMove(BlockSource &, BlockPos const&, BlockPos const&)const;
    std::string toDebugString()const;
    void calcGroundFriction(Mob &, BlockPos const&)const;
    void getRuntimeId()const;
    void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    bool isObstructingChests(BlockSource &, BlockPos const&)const;
    void onStepOn(Actor &, BlockPos const&)const;
    void getPlacementFacingAll(Actor &, BlockPos const&, float);
    void onPlace(BlockSource &, BlockPos const&)const;
    void getMapColor()const;
    void operator!=(Block const&)const;
    void buildSerializationId(unsigned int);
    bool isInteractiveBlock()const;
    bool isWallBlock()const;
    void operator==(Block const&)const;
    void getVisualShapeInWorld(BlockSource &, BlockPos const&, AABB &, bool)const;
    void copyState(Block const&, ItemState const&)const;
    void getResourceCount(Random &, int)const;
    bool isSolidBlockingBlockAndNotSignalSource()const;
    void getColor(BlockSource &, BlockPos const&)const;
    void setRuntimeId(unsigned int const&)const;
    bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    void getLegacyBlock()const;
    std::string getFullName()const;
    void randomlyModifyPosition(BlockPos const&, int &)const;
    void getStateMask(ItemState const&)const;
    void mayPick()const;
    bool canBeOriginalSurface()const;
    void getUIShape(AABB &)const;
    bool pushesUpFallingBlocks()const;
    void telemetryVariant(BlockSource &, BlockPos const&)const;
    void destroy(BlockSource &, BlockPos const&, Actor *)const;
    void onProjectileHit(BlockSource &, BlockPos const&, Actor const&)const;
    void popResource(BlockSource &, BlockPos const&, ItemInstance const&)const;
    void tick(BlockSource &, BlockPos const&, Random &)const;
    void getRedstoneProperty(BlockSource &, BlockPos const&)const;
    void ignoreEntitiesOnPistonMove()const;
    void getSilkTouchItemInstance()const;
    void spawnResources(BlockSource &, BlockPos const&, float, int)const;
    void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const;
    void getMaterial()const;
    void animateTick(BlockSource &, BlockPos const&, Random &)const;
    void keepState(ItemState const&)const;
    bool isTrapdoor()const;
    void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    void mayPlaceOn(BlockSource &, BlockPos const&)const;
    void use(Player &, BlockPos const&)const;
    void getCollisionShape(AABB &, BlockSource &, BlockPos const&, Actor *)const;
    bool dealsContactDamage(Actor const&, bool)const;
    void ignoreBlockForInsideCubeRenderer()const;
    bool matchesStates(BlockLegacy const&)const;
    bool isHeavy()const;
    void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    void handleRain(BlockSource &, BlockPos const&, float)const;
    void getColor()const;
    void mayPlace(BlockSource &, BlockPos const&)const;
    bool canHurtAndBreakItem()const;
    void liquidCanFlowIntoFromDirection(unsigned char, std::function<Block const& (BlockPos const&)> const&, BlockPos const&)const;
    void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    bool hasComparatorSignal()const;
    void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    void getFlexibility(BlockSource &, BlockPos const&)const;
    void sanitizeFillBlock(BlockSource &, BlockPos const&, Block const&)const;
    void DEPRECATEDcallOnGraphicsModeChanged(bool, bool, bool);
    void getGravity()const;
    bool isFenceGateBlock()const;
    bool canBeBrokenFromFalling()const;
    bool isInteraction()const;
    void getStrippedBlock()const;
    void getComparatorSignal(BlockSource &, BlockPos const&, unsigned char)const;
    void onRemove(BlockSource &, BlockPos const&)const;
    void transformOnFall(BlockSource &, BlockPos const&, Actor *, float)const;
    void getFlameOdds()const;
//  Block(unsigned short, WeakPtr<BlockLegacy> &); //TODO: incomplete function definition
    void getShadeBrightness()const;
    void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    void calcVariant(BlockSource &, BlockPos const&)const;
    bool isFenceBlock()const;
    bool isStemBlock()const;
    void getDebugText(std::vector<std::string> &, BlockPos const&)const;
    std::string getRawNameId()const;
    bool canBeBuiltOver(BlockSource &, BlockPos const&)const;
    bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    void getColorAtPos(BlockSource &, BlockPos const&)const;
    std::string buildDescriptionId()const;
    bool canInstatick()const;
    bool asItemInstance(BlockSource &, BlockPos const&)const;
    bool isSolid()const;
    void updateEntityAfterFallOn(Actor &)const;
    void addCollisionShapes(BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    void mayPick(BlockSource &, bool)const;
};
