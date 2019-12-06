#pragma once

class ConsumerComponent : BaseCircuitComponent {

public:
    virtual ~ConsumerComponent();
    virtual bool canConsumerPower(void);
    virtual void getBaseType(void)const;
    virtual void getInstanceType(void)const;
    virtual void addSource(CircuitSceneGraph &, CircuitTrackingInfo const&, int &, bool &);
    virtual void allowConnection(CircuitSceneGraph &, CircuitTrackingInfo const&, bool &);
    virtual void evaluate(CircuitSystem &, BlockPos const&);
    virtual bool isSecondaryPowered(void);

    void setAcceptHalfPulse(bool);
    void ConsumerComponent(void);
    void setPropagatePower(bool);
    bool isPromotedToProducer(void);
};
