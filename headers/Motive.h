#pragma once

class Motive {

public:
    static long mDefaultImage;
    static long mKebab;
    static long mAztec;
    static long mAlban;
    static long mAztec2;
    static long mBomb;
    static long mPlant;
    static long mWasteland;
    static long mPool;
    static long mCourbet;
    static long mSea;
    static long mSunset;
    static long mCreebet;
    static long mWanderer;
    static long mGraham;
    static long mMatch;
    static long mBust;
    static long mStage;
    static long mVoid;
    static long mSkullAndRoses;
    static long mWither;
    static long mFighters;
    static long mPointer;
    static long mPigscene;
    static long mBurningSkull;
    static long mSkeleton;
    static long mDonkeyKong;
    static long mEarth;
    static long mWind;
    static long mFire;
    static long mWater;


    void getAllMotivesAsList(void);
    void getMotiveByName(std::string const&);
    void Motive(std::string, int, int, int, int, bool);
    void getDefaultImage(void);
    void getWidth(void)const;
    void getHeight(void)const;
    void getUo(void)const;
    void getVo(void)const;
    bool isPublic(void)const;
};