#pragma once



class ItemState {

public:

    ItemState::~ItemState()

    void getID()const;
    void getVariationCount()const;
    void forEachState(std::function<bool ()(ItemState const&)>);
    ItemState(unsigned long, std::string const&, unsigned long);
};