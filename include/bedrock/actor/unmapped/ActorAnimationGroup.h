#pragma once

#include "../../../unmapped/PackStats"
#include "../../../core/Path"
#include "../../../unmapped/HashedString"
#include "../../pack/ResourcePackManager"
#include "../../../unmapped/ResourceLoadManager"


class ActorAnimationGroup {

public:

    void loadActorAnimationsAsync(ResourcePackManager &, ResourceLoadManager &);
    void loadActorAnimationsSync(ResourcePackManager &);
    void setExperimental(bool);
    void _buildAnimationFileSchema_v1_8(bool);
    void loadActorAnimation(std::string const&, Core::Path const&, PackStats &, CurrentCmdVersion, bool);
    void clear();
    void getActorAnimationInfo(HashedString const&);
    void getActorAnimation(HashedString const&);
    void getAnimations()const;
    ActorAnimationGroup(void);
};