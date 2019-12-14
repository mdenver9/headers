#pragma once

class MobEffectDefinition {

public:

    void MobEffectDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, MobEffectDefinition>> &);
    void setMobEffectByName(std::string const&);
    void setEffectTimeInTicks(int const&);
    void initialize(EntityContext &, MobEffectComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
