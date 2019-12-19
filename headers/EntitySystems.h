#pragma once

class EntitySystems {

public:

    void EntitySystems(void);
    void _registerSystems(void);
    void _unregisterSystems(void);
    void tick(EntityRegistry &);
    void registerTickingSystem(std::unique_ptr<ITickingSystem, std::default_delete<ITickingSystem>>);
    void getPlayerInteractionSystem(void);
    void _registerPlayerInteractionSystem(void);
    void _unregisterTickingSystems(void);
    void _unregisterPlayerInteractionSystem(void);
};