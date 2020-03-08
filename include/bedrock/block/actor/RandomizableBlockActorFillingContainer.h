#pragma once

#include "../../container/FillingContainer"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"


class RandomizableBlockActorFillingContainer : RandomizableBlockActorContainerBase, FillingContainer {

public:
    virtual RandomizableBlockActorFillingContainer::~RandomizableBlockActorFillingContainer();
    virtual void startOpen(Player &);
    virtual void dropContents(BlockSource &, Vec3 const&, bool);

    RandomizableBlockActorFillingContainer(BlockActorType, std::string const&, BlockPos const&, int, ContainerType);
};
