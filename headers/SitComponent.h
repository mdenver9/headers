#pragma once

class SitComponent {

public:

    void initFromDefinition(Actor &);
    void SitComponent(SitComponent&&);
    void getInteraction(Actor &, Player &, ActorInteraction &);
    void _sitEvent(Actor &, bool);
};
