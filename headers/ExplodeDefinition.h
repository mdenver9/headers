#pragma once

class ExplodeDefinition {

public:

    void ExplodeDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, ExplodeDefinition>> &);
    void initialize(EntityContext &, ExplodeComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
