#pragma once

#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/block/BlockLegacy"
#include "../json/Value"


class BlockGraphics {

public:
    static long SIZE_OFFSET;
    static long mInitialized;
    static long mBlocks;
    static long mTerrainTextureAtlas;
    static long mOwnedBlocks;
    static long mBlockLookupMap[abi:cxx11];
    static long mDummyBlock;
    static long mModels[abi:cxx11];
    static long mBlockModelAccess;
    static long mTessellatedModels[abi:cxx11];

    virtual BlockGraphics::~BlockGraphics();
    virtual void getIconYOffset(void)const;
    virtual void getColor(int)const;
    virtual void getColor(BlockSource &, BlockPos const&)const;
    virtual void getColorForParticle(BlockSource &, BlockPos const&, int)const;
    virtual bool isSeasonTinted(BlockSource &, BlockPos const&)const;
    virtual void onGraphicsModeChanged(bool, bool);
    virtual void getRenderLayer(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers(void);
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVisualShape(unsigned short, AABB &, bool)const;
    virtual void getCarriedTexture(unsigned long, int)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &);
    virtual void randomlyModifyPosition(BlockPos const&, int &)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void setVisualShape(AABB const&);
    virtual void setVisualShape(Vec3 const&, Vec3 const&);

    void getForBlock(Block const&);
    void getForBlock(BlockLegacy const&);
    void getBlocks(void);
    void setAtlasItemManager(std::shared_ptr<AtlasItemManager>);
    void setTextures(BlockGraphics&, Json::Value const&);
    void setTextureItem(std::string const&);
    void setTextureItem(std::string const&, std::string const&, std::string const&);
    void setTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void setCarriedTextures(BlockGraphics&, Json::Value const&);
    void setCarriedTextureItem(std::string const&);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&);
    void setCarriedTextureItem(std::string const&, std::string const&, std::string const&, std::string const&, std::string const&, std::string const&);
    void setBlockShape(BlockGraphics&, Json::Value const&);
    void getBlockShape(void)const;
    void setBlockShape(BlockShape);
    void setBrightnessGamma(BlockGraphics&, Json::Value const&);
    void setSoundType(BlockGraphics&, Json::Value const&);
    void setSoundType(BlockSoundType);
    bool isInitialized(void);
    void useBlockModel(void)const;
    void useTessellatedModel(void)const;
    void getTessellatedModel(int, BlockPos const&)const;
    void getTessellatedModel(std::string const&, BlockPos const&)const;
    void getTessellatedPartIndex(std::string const&)const;
    void loadCustomIconTexture(Json::Value const&);
    void _findOrAppendTexture(std::string const&);
    void getTextureItem(std::string const&);
    void _loadCustomBlockShapeModel(std::vector<std::string, std::allocator<std::string>> const&, Json::Value const&);
    void findBlockModel(std::string const&);
    void findOrTessellateModel(std::string const&, BlockGeometry::Model const*);
    void loadCustomBlockShapeModels(Json::Value const&);
    void registerBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value>> &, std::string const&, BlockShape);
    void getBlock(void)const;
    void texturePaletteSize(void)const;
    void setDefaultCarriedTextures(void);
    void registerLooseBlockGraphics(std::vector<Json::Value, std::allocator<Json::Value>> &, BlockPalette const&);
    void initBlocks(ResourcePackManager &, BlockPalette const&);
    void _initBlockModels(ResourcePackManager &);
    void setMapColor(Color const&);
    void enableAllowSame(void);
    void teardownBlocks(void);
    BlockGraphics(std::string const&);
    BlockGraphics(Block const&, BlockGraphics::ConstructorToken);
    void getMapColor(void)const;
    void getIconTexture(int)const;
    void getTextureCarriedVariations(unsigned long, int)const;
    void getTexture(unsigned long, int)const;
    void getTextureDefaultVariations(unsigned long, int)const;
    void getTexture(unsigned long, Block const&)const;
    void getTexture(BlockPos const&, unsigned long, int)const;
    void chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> const&);
    void getTexture(BlockPos const&, unsigned long, Block const&)const;
    void _chooseRandomTexture(float, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> const&);
    bool isValid(void)const;
    void getAtlasItem(unsigned long)const;
    void getTextureUVCoordinateSet(std::string const&, int, int);
    bool isAlphaTested(void);
    void getRenderLayer(void)const;
    bool isFull(void)const;
    bool isFullAndOpaque(void)const;
    bool isFullAndOpaque(Block const&);
    void getSoundType(void)const;
    void lookupByName(std::string const&, bool);
    void getTessellatedModelTextures(unsigned long, BlockPos const&, int, bool, std::vector<TextureUVCoordinateSet, std::allocator<TextureUVCoordinateSet>> &)const;
    void getPositionVariantIndex(int, BlockPos const&)const;
    void setBrightnessGamma(float);
    BlockGraphics(BlockGraphics const&);
};
