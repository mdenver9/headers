#pragma once

class BurstReactionComponent : LabTableReactionComponent {

public:
    virtual BurstReactionComponent::~BurstReactionComponent();
    virtual void _onEnd(LabTableReaction &, BlockSource &);

    BurstReactionComponent(ParticleType, Vec3 const&, Vec3 const&, int, int, int, bool, HashedString const&);
};