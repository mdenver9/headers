#pragma once

class InstantaneousMobEffect : MobEffect {

    virtual void InstantaneousMobEffect::~InstantaneousMobEffect();
    virtual void InstantaneousMobEffect::~InstantaneousMobEffect();
    virtual void applyEffects(Actor *, int, int)const;
    virtual void removeEffects(Actor *);
    virtual void applyInstantaneousEffect(Actor *, Actor *, Actor *, int, float)const;
    virtual void isInstantaneous(void)const;
    virtual void getAttributeModifierValue(int, AttributeModifier const&)const;
    virtual void isDurationEffectTick(int, int)const;
}
