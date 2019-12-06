#pragma once

class EducationOptions : ResourcePackListener {

public:
    static long EducationOptions::DEFAULT_OPTION;
    static long EducationOptions::CHEMISTRY_ENABLED;

    virtual ~EducationOptions();
    virtual void onActiveResourcePacksChanged(ResourcePackManager &);

    void EducationOptions(ResourcePackManager *);
    void init(LevelData const&);
    void _setFeature(EducationFeature, bool);
    void _isFeatureEnabled(EducationFeature)const;
    bool isChemistryEnabled(void);
    bool isEducationEnabled(void);
    bool isCodeBuilderEnabled(void);
    bool isBaseCodeBuilderEnabled(void);
};
