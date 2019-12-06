#pragma once

class HudContainerModel : ContainerModel {

public:
    virtual void containerContentChanged(int);
    virtual ~HudContainerModel();
    virtual bool isValid(void);

    void HudContainerModel(ContainerEnumName, Player &);
    void _init(void);
    void _refreshContainer(void);
    void _refreshSlot(int);
};
