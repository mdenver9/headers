#pragma once

class EnchantingInputContainerController : ContainerController {

public:
    virtual EnchantingInputContainerController::~EnchantingInputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual bool isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;

    EnchantingInputContainerController(std::shared_ptr<ContainerModel>);
    bool isEnchantingInputItem(ItemDescriptor const&);
};