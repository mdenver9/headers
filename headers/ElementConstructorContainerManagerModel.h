#pragma once

class ElementConstructorContainerManagerModel : ContainerManagerModel {

public:
    virtual ~ElementConstructorContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges(void);
    virtual void init(void);
    virtual bool isValid(float);

    void ElementConstructorContainerManagerModel(ContainerID, Player &, BlockPos const&);
};
