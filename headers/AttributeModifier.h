#pragma once

class AttributeModifier {

public:
    static long mInvalidUUID;

    virtual ~AttributeModifier();
    virtual bool isInstantaneous(void)const;

    void AttributeModifier(AttributeModifier const&);
    void AttributeModifier(mce::UUID, std::string const&, float, int, int, bool);
    void AttributeModifier(void);
    void getId(void)const;
    void getOperation(void)const;
    void getOperand(void)const;
    void getAmount(void)const;
    bool isSerializable(void)const;
    void setSerialize(bool);
};
