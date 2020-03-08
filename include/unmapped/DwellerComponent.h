#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class DwellerComponent {

public:
    static long DWELLING_TYPES[abi:cxx11];
    static long DWELLING_ROLES[abi:cxx11];


    DwellerComponent(DwellerComponent&&);
    DwellerComponent(void);
    void initFromDefinition(Actor &);
    void _getType(std::string const&)const;
    void _getRole(std::string const&)const;
    void onDeath(Actor &, ActorDamageSource const&);
    void getVillage(Actor const&)const;
    void onRemove(Actor &);
    void setLastHurtByMob(Actor &, Mob *);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void addAdditionalSaveData(CompoundTag &);
    void getDwellerRole(void)const;
    void getCanFindPOI(void)const;
    void buildDebugInfo(Actor const&, std::string &)const;
    bool hasDwelling(void)const;
    void getDwellingUniqueID(void)const;
    void setDwellingUniqueID(Actor &, mce::UUID);
    void _clearDwelling(void);
    void getDwellingUpdateInterval(void)const;
    void setDwellingUpdateInterval(unsigned long);
    void DecrementDwellingUpdateInterval(void);
    void getFixUpRole(void)const;
    void setFixUpRole(bool);
    void getUpdateIntervalBase(void)const;
    void getUpdateIntervalVariant(void)const;
    void getVillageCenter(Actor const&)const;
    bool hasPreferredProfession(Actor const&)const;
    void _isLockedInToProfession(Actor const&)const;
    void getPreferredProfession(void)const;
    void trySetPreferredProfession(Actor const&, HashedString const&);
    void clearPreferredProfession(void);
    bool isWithinRestriction(Actor const&)const;
    void tryToMigrate(Actor &, Village *, Village *);
    bool wantsToMigrate(Actor const&, Village *)const;
    void tryToFixupRole(Actor const&, Village *);
    bool needsToFixupVillageRole(Actor const&, Village *)const;
    void checkandUpdateDwellingStatus(Actor const&, Village *);
};
