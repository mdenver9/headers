#pragma once

#include "../bedrock/pack/WorldTemplatePackSource"
#include "../core/Path"
#include "../bedrock/pack/WorldTemplatePackManifest"


class WorldTemplateInfo {

public:

    WorldTemplateInfo(WorldTemplatePackManifest const&);
    void getPackManifest(void)const;
    bool isPremium(void)const;
    bool isVirtualCatalogItem(void)const;
    bool isPremiumLocked(IEntitlementManager &)const;
    void getWorldSize(void)const;
    void setWorldIconOverride(Core::Path const&);
    bool isWorldIconOverridden(void)const;
    void addWorldTemplatePackSource(WorldTemplatePackSource &);
    void forEachPackInPackSources(std::function<void ()(Pack const&)>)const;
    void loadPacks(PackManifestFactory &, IContentKeyProvider const&);
};
