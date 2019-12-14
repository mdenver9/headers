#pragma once

class FeatureToggles {

public:
    static long FeatureToggles::mFeatureToggles;


    void makeDefault(void);
    void makeFeatureToggles(void);
    void _registerFeatures(void);
    void initialize(void);
    void _initialize(void);
    void get(FeatureOptionID);
    void _load(void);
    void _setupDependencies(void);
    void _tearDownDependencies(void);
    void count(void)const;
    void get(FeatureOptionID)const;
    bool isEnabled(FeatureOptionID)const;
    void _save(void);
    void _registerFeature(FeatureOptionID, std::string const&, std::string const&, bool, FeatureOptionID, std::function<void ()(Option *)>, std::function<bool ()(void)>);
    void _getEnabledSetupCallback(FeatureOptionID);
    void _getEnabledLockedCallback(FeatureOptionID);
    void FeatureToggles(void);
};
