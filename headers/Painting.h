#pragma once

class Painting : HangingActor {

public:
    virtual ~Painting();
    virtual void remove(void);
    virtual void setPos(Vec3 const&);
    virtual void getAddPacket(void);
    virtual void getShadowRadius(void)const;
    virtual bool isPickable(void);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getWidth(void)const;
    virtual void getHeight(void)const;
    virtual void dropItem(void);
    virtual void placeHangingEntity(BlockSource &, int);

    void Painting(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void clientInitialize(int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getCurrentMotive(void)const;
};
