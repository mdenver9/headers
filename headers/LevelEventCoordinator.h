#pragma once

class LevelEventCoordinator {

public:

    void LevelEventCoordinator(void);
    void sendLevelInitialized(Level &);
    void sendLevelRemovedActor(Level &, Actor &);
    void sendLevelAddedActor(Level &, Actor &);
    void sendLevelTick(void);
    void sendLevelWeatherChanged(std::string const&, bool, bool);
};
