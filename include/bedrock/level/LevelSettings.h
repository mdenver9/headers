#pragma once

#include "../../unmapped/EducationLevelSettings"
#include "../../unmapped/BaseGameVersion"
#include "../../unmapped/PackInstanceId"


class LevelSettings {

public:

    LevelSettings(LevelSettings const&);
    LevelSettings(LevelSettings&&);
    LevelSettings(void);
    LevelSettings(LevelSummary const&);
    LevelSettings(LevelData const&, AutomaticID<Dimension, int>);
    LevelSettings(unsigned int, GameType, Difficulty, AutomaticID<Dimension, int>, GeneratorType, BlockPos const&, bool, int, EducationEditionOffer, float, float, bool, bool, bool, Social::GamePublishSetting, Social::GamePublishSetting, bool, bool, bool, bool, bool, bool, GameRules, bool, bool, Abilities, unsigned int, bool, bool, bool, BaseGameVersion const&);
    void setEducationFeaturesEnabled(bool);
    void getDefaultSpawn(void)const;
    void getSeed(void)const;
    void getGameType(void)const;
    void getDimension(void)const;
    void getGameDifficulty(void)const;
    void getTime(void)const;
    void setForceGameType(bool);
    void forceGameType(void)const;
    bool hasAchievementsDisabled(void)const;
    void getGenerator(void)const;
    void getRainLevel(void)const;
    void getLightningLevel(void)const;
    bool isEducationEditionWorld(void)const;
    void getEducationEditionOffer(void)const;
    void setEducationEditionOffer(EducationEditionOffer);
    void educationFeaturesEnabled(void)const;
    void setImmutableWorld(bool);
    void getImmutableWorld(void)const;
    void getGameRules(void)const;
    bool hasConfirmedPlatformLockedContent(void)const;
    void getMultiplayerGameIntent(void)const;
    void getLanBroadcastIntent(void)const;
    bool hasXBLBroadcastIntent(void)const;
    void getXBLBroadcastIntent(void)const;
    bool hasPlatformBroadcastIntent(void)const;
    void getPlatformBroadcastIntent(void)const;
    bool hasCommandsEnabled(void)const;
    bool isTexturepacksRequired(void)const;
    bool hasLockedBehaviorPack(void)const;
    bool hasLockedResourcePack(void)const;
    bool isFromLockedTemplate(void)const;
    void useMsaGamertagsOnly(void)const;
    bool hasBonusChestEnabled(void)const;
    bool hasStartWithMapEnabled(void)const;
    void getServerChunkTickRange(void)const;
    void getDefaultAbilities(void)const;
    void setOverrideSavedSettings(bool);
    void shouldOverrideSavedSettings(void)const;
    void overrideSavedSettings(LevelData &)const;
    bool achievementsWillBeDisabledOnLoad(void)const;
    void setNewWorldBehaviorPackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&);
    void getNewWorldBehaviorPackIdentities(void)const;
    void setNewWorldResourcePackIdentities(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&);
    void getNewWorldResourcePackIdentities(void)const;
    void setForceExperimentalGameplay(bool);
    void shouldForceExperimentalGameplay(void)const;
    bool isFromWorldTemplate(void)const;
    bool isWorldTemplateOptionLocked(void)const;
    void getOnlySpawnV1Villagers(void)const;
    void setOnlySpawnV1Villagers(bool);
    void getBaseGameVersion(void)const;
    void setBaseGameVersion(BaseGameVersion const&);
    void setEducationLevelSettings(EducationLevelSettings);
    void getEducationLevelSettings(void)const;
    void validateGameDifficulty(Difficulty);
    void parseSeedString(std::string const&, unsigned int);
};
