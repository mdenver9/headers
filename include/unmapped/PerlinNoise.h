#pragma once



class PerlinNoise {

public:

    void _init(Random &);
    PerlinNoise(int);
    PerlinNoise(unsigned int, int, int);
    PerlinNoise(Random &, int, int);
    void getValue(Vec3 const&)const;
    void getRegion(float *, Vec3 const&, int, int, int, Vec3 const&)const;
    void getRegion(float *, Vec2 const&, int, int, Vec2 const&, float)const;
    void hashCode(void)const;
};
