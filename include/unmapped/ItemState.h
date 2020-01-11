#pragma once

class ItemState {

public:

    virtual ItemState::~ItemState();

    void getID(void)const;
    void getVariationCount(void)const;
    void forEachState(std::function<bool ()(ItemState const&)>);
    ItemState(unsigned long, std::string const&, unsigned long);
};