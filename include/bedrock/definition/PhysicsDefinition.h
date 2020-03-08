#pragma once

#include "../../unmapped/EntityContext"
#include "../../json/Value"


class PhysicsDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, PhysicsDefinition>> &);
    void initialize(EntityContext &, PhysicsComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    PhysicsDefinition(void);
};
