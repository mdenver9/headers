#pragma once

#include "../../unmapped/BlockPos"
#include "../../raknet/BitStream"
#include "../../unmapped/PackIdVersion"
#include "../../unmapped/BaseGameVersion"
#include "../nbt/CompoundTag"
#include "../../unmapped/GameRuleId"
#include "../../unmapped/Tick"
#include "../../unmapped/ContentIdentity"


class LevelData {

public:

    bool hasSpawnPos(void)const;
    void getLastLoadedWithVersion(void)const;
    LevelData(void);
    LevelData(LevelSettings const&, std::string const&, GeneratorType, BlockPos const&, bool, EducationEditionOffer, float, float);
    void setSpawnPos(BlockPos const&);
    LevelData(CompoundTag const&);
    void getTagData(CompoundTag const&);
    LevelData(LevelData&&);
    void v1_read(RakNet::BitStream &, StorageVersion);
    void createTag(void)const;
    void setTagData(CompoundTag &)const;
    void getFlatWorldGeneratorOptions(void)const;
    bool isEducationEditionLevel(void)const;
    void setGameType(GameType);
    void _setGameRulesBasedOnPremiumContentIdentity(void);
    void getPremiumTemplateContentIdentity(void)const;
    void getSeed(void)const;
    void getSpawnPos(void)const;
    void getTime(void)const;
    bool isAlwaysDay(void)const;
    void getGameRules(void)const;
    bool isGameRule(GameRuleId)const;
    void getServerChunkTickRange(void)const;
    void setServerChunkTickRange(unsigned int);
    void getLoadedPlayerTag(void);
    void setSeed(unsigned int);
    void _updateLimitedWorldOrigin(BlockPos const&);
    void setTime(int);
    void clearLoadedPlayerTag(void);
    void setLevelName(std::string const&);
    void getGenerator(void)const;
    void setGenerator(GeneratorType);
    void touchLastLoadedWithVersion(void);
    void getLastPlayed(void)const;
    void updateLastTimePlayed(void)const;
    bool isLightning(void)const;
    void getLightningLevel(void)const;
    void setLightningLevel(float);
    void getLightningTime(void)const;
    void setLightningTime(int);
    bool isRaining(void)const;
    void getRainLevel(void)const;
    void setRainLevel(float);
    void getRainTime(void)const;
    void setRainTime(int);
    void getGameType(void)const;
    void getGameDifficulty(void)const;
    void setGameDifficulty(Difficulty);
    void getForceGameType(void)const;
    void setForceGameType(bool);
    void getSpawnMobs(void)const;
    void setSpawnMobs(bool);
    bool hasAchievementsDisabled(void)const;
    void disableAchievements(void);
    void getUseMsaGamertagsOnly(void)const;
    void setUseMsaGamertagsOnly(bool);
    bool achievementsWillBeDisabledOnLoad(void)const;
    bool hasCommandsEnabled(void)const;
    void recordStartUp(void);
    bool isNewLevel(void)const;
    void getWorldCenter(void)const;
    void getWorldStartCount(void)const;
    void getStorageVersion(void)const;
    void setStorageVersion(StorageVersion);
    void getMinCompatibleClientVersion(void)const;
    void getNetworkVersion(void)const;
    void setNetworkVersion(int);
    bool isPremiumWorldTemplate(void)const;
    void setPremiumTemplateContentIdentity(ContentIdentity const&);
    void getWorldTemplateIdentity(void)const;
    void setWorldTemplateIdentity(PackIdVersion const&);
    void getBaseGameVersion(void)const;
    void setBaseGameVersion(BaseGameVersion const&);
    void getCurrentTick(void)const;
    void incrementTick(void);
    void setCurrentTick(Tick &);
    void getAdventureSettings(void);
    void getGameRules(void);
    void getDefaultAbilities(void)const;
    void getDefaultAbilities(void);
    void getEducationEditionOffer(void)const;
    void setEducationEditionOffer(EducationEditionOffer);
    void educationFeaturesEnabled(void)const;
    void setEducationFeaturesEnabled(bool);
    bool hasConfirmedPlatformLockedContent(void)const;
    void setConfirmedPlatformLockedContent(bool);
    void getMultiplayerGameIntent(void)const;
    void setMultiplayerGameIntent(bool);
    bool isMultiplayerGame(void)const;
    void setMultiplayerGame(bool);
    void getLANBroadcastIntent(void)const;
    void setLANBroadcastIntent(bool);
    void getLANBroadcast(void)const;
    void setLANBroadcast(bool);
    void getXBLBroadcastIntent(void)const;
    void setXBLBroadcastIntent(Social::GamePublishSetting);
    void getXBLBroadcastMode(void)const;
    void setXBLBroadcastMode(Social::GamePublishSetting);
    void getPlatformBroadcastIntent(void)const;
    void setPlatformBroadcastIntent(Social::GamePublishSetting);
    void getPlatformBroadcastMode(void)const;
    void setPlatformBroadcastMode(Social::GamePublishSetting);
    void setCommandsEnabled(bool);
    bool hasExperimentalGameplayEnabled(void)const;
    bool isTexturepacksRequired(void)const;
    void setTexturepacksRequired(bool);
    bool hasLockedBehaviorPack(void)const;
    void setHasLockedBehaviorPack(bool);
    bool hasLockedResourcePack(void)const;
    void setHasLockedResourcePack(bool);
    bool isFromLockedTemplate(void)const;
    void setFromLockedTemplate(bool);
    bool isFromWorldTemplate(void)const;
    void setFromWorldTemplate(bool);
    bool isWorldTemplateOptionLocked(void)const;
    void setWorldTemplateOptionLocked(bool);
    void setEducationOid(std::string const&);
    void setEducationProductId(std::string const&);
    bool hasBonusChestEnabled(void)const;
    void getBonusChestSpawned(void)const;
    void setBonusChestEnabled(bool);
    void setBonusChestSpawned(bool);
    bool hasStartWithMapEnabled(void)const;
    void setStartWithMapEnabled(bool);
    bool hasMapsCenteredToOrigin(void)const;
    void setOnlySpawnV1Villagers(bool);
    void getOnlySpawnV1Villagers(void)const;
    void getNetherScale(void)const;
    bool isLegacyLevel(void)const;
    bool requiresCopiedPackRemovalCheck(void)const;
    void setRequiresCopiedPackRemovalCheck(bool);
};
