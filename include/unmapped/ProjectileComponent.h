#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/nbt/CompoundTag"


class ProjectileComponent {

public:
    static long DELAY_ON_HIT;


    void getWaitingForServer(void)const;
    void getCurrentDelay(void)const;
    void setCurrentDelay(unsigned int);
    void getReflect(void)const;
    void getCachedHitResult(void)const;
    void setReflect(bool);
    void setWaitingForServer(bool);
    void getWaitingToHitGround(void)const;
    void setWaitingToHitGround(bool);
    void getWasOnGround(void)const;
    void setWasOnGround(bool);
    void getFoundApex(void)const;
    void setApexPos(Vec3);
    void getPendingTargetID(void)const;
    void getIsHoming(void)const;
    void getShakeTime(void)const;
    void setShakeTime(int);
    void getStuckToBlockPos(void)const;
    void getCollisionPos(void)const;
    void setLife(int);
    void setFlightTime(int);
    void setOnGroundTime(int);
    void getHitWater(void);
    void setHitResult(HitResult);
    void getMultipleHits(void)const;
    void getHitActor(void)const;
    void getFlightTime(void)const;
    void getDamagesOwner(void);
    void getReflectOnHurt(void)const;
    void setCachedHitResult(HitResult);
    void setFoundApex(bool);
    void getDelayedFrame(void);
    void setFrameDelayed(void);
    ProjectileComponent(ProjectileComponent&&);
    void getOwnerID(void)const;
    ProjectileComponent(ProjectileComponent const&);
    void getOnFireTime(void)const;
    void getEnchantPiercing(void)const;
    void setEnchantPower(int);
    void getEnchantPower(void)const;
    void getOnGroundTime(void)const;
    ProjectileComponent(void);
    void initFromDefinition(Actor &);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void getUncertainty(Difficulty)const;
    void getUncertaintyBase(void)const;
    void getUncertaintyMultiplier(void)const;
    void getThrowUpAngleOffset(void)const;
    void getGravity(void);
    void getParticleType(void);
    void getSemiRandomDiffDamage(void);
    void getIsDangerous(void);
    void getShootTarget(void);
    void onHit(Actor &, HitResult const&);
    void _isLoyaltyTrident(Actor const&)const;
    void _handleLightningOnHit(Actor &);
    void hurt(Actor &, ActorDamageSource const&);
    void getPotionEffect(void);
    void setPotionEffect(int);
    void getKnockback(void);
    void getKnockbackForce(void)const;
    void setKnockbackForce(float);
    void setChanneling(void);
    void getEnchantChanneling(void)const;
    void setEnchantImpaler(int const&);
    void getEnchantImpaler(void)const;
    void getIgniteOnHit(void);
    void getCatchFire(void)const;
    void getAnchor(void);
    void getOffset(void);
    void getShootSound(void);
    void getHitSound(void);
    void getBlockStuckTo(void);
    void setBlockStuckTo(BlockPos const&);
    void incrementLife(void);
    void incrementFlightTime(void);
    void setShouldBounce(bool);
    void getShouldBounce(void);
    void setNoPhysics(bool);
    void getNoPhysics(void)const;
    void setOwnerId(ActorUniqueID);
    void setSplashRange(float);
    void getShooterAngle(Actor &)const;
    void shoot(Actor &, Actor &);
    void shoot(Actor &, Vec3 const&, float, float, Vec3 const&, Actor*);
    void getThrowPower(void)const;
    void _selectNextMoveDirection(Actor &, ProjectileComponent::EAxis);
    void setActiveTarget(Actor &, Actor*);
    void handleMovementGravity(Actor &);
    void handleMovementHoming(Actor &);
    void lerpMotion(Actor &, Vec3 const&);
    void incrementOnGroundTime(void);
    void setDamagesOwner(bool);
    void getHitResult(void)const;
    void setCollisionPos(Vec3 const&);
    void setActorHitCount(int);
    void setHitActor(bool);
    void decrementActorHitCount(void);
    void getActorHitCount(void)const;
    void setHitFace(unsigned char const&);
    void getSplashRange(void);
    void setDamage(float);
    void getDamage(void);
    void setPiercingEnchantLevel(int);
};
