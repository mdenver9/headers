#pragma once

class TickingAreaListBase {

public:

    void TickingAreaListBase(void);
    void tick(Tick const&);
    void tickSeasons(Random &);
    void getAreas(void)const;
    bool hasTickingAreaNamed(std::string const&)const;
    void add(std::unique_ptr<ITickingArea, std::default_delete<ITickingArea>>);
    void empty(void)const;
    void findAreasContaining(BlockPos const&);
    void findAreasNamed(std::string const&);
    void removeAreas(std::vector<std::shared_ptr<ITickingArea>, std::allocator<std::shared_ptr<ITickingArea>>> const&);
    void removeAllAreas(void);
    void getTickingAreasDescription(void)const;
    void countStandaloneTickingAreas(void)const;
    void destroyAreas(void);
    void processRemoves(void);
    void processUpdates(void);
    void getAreaFor(ActorUniqueID const&)const;
    void _shouldRemoveArea(unsigned int, std::vector<Vec3, std::allocator<Vec3>> const&)const;
};