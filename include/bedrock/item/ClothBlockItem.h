#pragma once

#include <memory>
#include <string>
#include "BlockItem.h"


class ClothBlockItem : public BlockItem {

public:
    virtual ~ClothBlockItem(); // _ZN14ClothBlockItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void getLevelDataForAuxValue(int)const; // _ZNK14ClothBlockItem23getLevelDataForAuxValueEi
    virtual std::string buildDescriptionId(ItemDescriptor const&, std::unique_ptr<CompoundTag> const&)const; // _ZNK14ClothBlockItem18buildDescriptionIdB5cxx11ERK14ItemDescriptorRKSt10unique_ptrI11CompoundTagSt14default_deleteIS4_EE
    ClothBlockItem(std::string const&, int, Block const*); // _ZN14ClothBlockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiPK5Block
};
