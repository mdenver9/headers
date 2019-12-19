#pragma once

class GameRules {

public:
    static long DEFAULT_RANDOMTICKSPEED;
    static long MAX_RANDOMTICKSPEED;
    static long MAX_FUNCTIONCOMMANDLIMIT;
    static long DEFAULT_PLAYER_SPAWN_RADIUS;
    static long MIN_PLAYER_SPAWN_RADIUS;
    static long MAX_PLAYER_SPAWN_RADIUS;


    void GameRules(GameRules const&);
    void GameRules(GameRules&&);
    void getRules(void)const;
    void getRule(GameRuleId)const;
    bool hasRule(GameRuleId)const;
    void GameRules(void);
    void _registerRules(void);
    void _validateRules(void);
    void _validateMarketplaceGameRuleTypes(void);
    void createAllGameRulesPacket(void)const;
    void deserializeRules(GameRulesChangedPacketData const&);
    void nameToGameRuleIndex(std::string const&)const;
    void setRule(GameRuleId, bool, bool, bool *, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, int, bool, bool *, bool *, GameRule::ValidationError *);
    void setRule(GameRuleId, float, bool, bool *, bool *, GameRule::ValidationError *);
    void _registerRule(std::string const&, GameRuleId);
    void _setRule(GameRuleId, GameRule::Value, GameRule::Type, bool, bool *, bool *, GameRule::ValidationError *);
    void _getRule(GameRuleId);
    void _createPacket(GameRule const&);
    void getBool(GameRuleId)const;
    void getInt(GameRuleId)const;
    void getFloat(GameRuleId)const;
    void setTagData(CompoundTag &)const;
    void getTagData(CompoundTag const&);
    void setMarketplaceOverrides(void);
    void _getMarketplaceGameRulesDefaultMap(void);
    void _registerEDURules(void);
};
