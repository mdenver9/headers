#pragma once

#include <functional>
#include <string>


class Abilities {

public:
    static long ABILITY_NAMES;
    static std::string TAG;

    ~Abilities(); // _ZN9AbilitiesD2Ev
    Abilities(); // _ZN9AbilitiesC2Ev
    void _initAbilities(); // _ZN9Abilities14_initAbilitiesEv
    void _registerAbilities(); // _ZN9Abilities18_registerAbilitiesEv
//    void setPlayerPermissions(long); //TODO: incomplete function definition // _ZN9Abilities20setPlayerPermissionsE21PlayerPermissionLevel
    Abilities(Abilities const&); // _ZN9AbilitiesC2ERKS_
    void operator==(Abilities const&)const; // _ZNK9AbilitieseqERKS_
    void operator!=(Abilities const&)const; // _ZNK9AbilitiesneERKS_
    void addSaveData(CompoundTag &)const; // _ZNK9Abilities11addSaveDataER11CompoundTag
//    void forEachAbility(std::function<void (Ability const&, char const*)> const&, long)const; //TODO: incomplete function definition // _ZNK9Abilities14forEachAbilityERKSt8functionIFvRK7AbilityPKcEENS1_7OptionsE
    void loadSaveData(CompoundTag const&); // _ZN9Abilities12loadSaveDataERK11CompoundTag
//    void forEachAbility(std::function<void (Ability &, char const*)> const&, long); //TODO: incomplete function definition // _ZN9Abilities14forEachAbilityERKSt8functionIFvR7AbilityPKcEENS1_7OptionsE
//    void setAbility(long, bool); //TODO: incomplete function definition // _ZN9Abilities10setAbilityE14AbilitiesIndexb
    bool isFlying()const; // _ZNK9Abilities8isFlyingEv
//    void getBool(long)const; //TODO: incomplete function definition // _ZNK9Abilities7getBoolE14AbilitiesIndex
    void getCommandPermissions()const; // _ZNK9Abilities21getCommandPermissionsEv
//    void setCommandPermissions(long); //TODO: incomplete function definition // _ZN9Abilities21setCommandPermissionsE22CommandPermissionLevel
    bool isOperator()const; // _ZNK9Abilities10isOperatorEv
    void getPlayerPermissions()const; // _ZNK9Abilities20getPlayerPermissionsEv
//    void _setCustomCachedAbility(long); //TODO: incomplete function definition // _ZN9Abilities23_setCustomCachedAbilityE14AbilitiesIndex
    void _resetCustomAbilities(); // _ZN9Abilities21_resetCustomAbilitiesEv
    void _resetAbilities(); // _ZN9Abilities15_resetAbilitiesEv
//    void getAbility(long); //TODO: incomplete function definition // _ZN9Abilities10getAbilityE14AbilitiesIndex
//    void setAbilityDiff(long, bool, bool &); //TODO: incomplete function definition // _ZN9Abilities14setAbilityDiffE14AbilitiesIndexbRb
//    void setAbility(long, float); //TODO: incomplete function definition // _ZN9Abilities10setAbilityE14AbilitiesIndexf
//    void setAbility(long, Ability const&); //TODO: incomplete function definition // _ZN9Abilities10setAbilityE14AbilitiesIndexRK7Ability
//    void getAbility(long)const; //TODO: incomplete function definition // _ZNK9Abilities10getAbilityE14AbilitiesIndex
//    void getFloat(long)const; //TODO: incomplete function definition // _ZNK9Abilities8getFloatE14AbilitiesIndex
//    void getAbilityName(long); //TODO: incomplete function definition // _ZN9Abilities14getAbilityNameE14AbilitiesIndex
    void nameToAbilityIndex(std::string const&); // _ZN9Abilities18nameToAbilityIndexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void onSwitchToCustom(); // _ZN9Abilities16onSwitchToCustomEv
//    void getCustomAbilityFromCache(long); //TODO: incomplete function definition // _ZN9Abilities25getCustomAbilityFromCacheE14AbilitiesIndex
//    void getCustomAbilityFromCache(long)const; //TODO: incomplete function definition // _ZNK9Abilities25getCustomAbilityFromCacheE14AbilitiesIndex
//    void _registerAbility(long, Ability const&); //TODO: incomplete function definition // _ZN9Abilities16_registerAbilityE14AbilitiesIndexRK7Ability
};
