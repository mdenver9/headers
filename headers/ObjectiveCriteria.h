#pragma once

class ObjectiveCriteria {

public:

    void ObjectiveCriteria(std::string const&, bool, ObjectiveRenderType);
    bool isReadOnly(void)const;
    void getRenderType(void)const;
    void deserialize(CompoundTag const&);
    void serialize(ObjectiveCriteria const&);
};