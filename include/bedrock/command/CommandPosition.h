#pragma once



class CommandPosition {

public:
    void getBlockPos(CommandOrigin const&, Vec3 const&)const;
    void getPosition(Vec3 const&, Vec3 const&)const;
    void getBlockPos(Vec3 const&, Vec3 const&)const;
    CommandPosition();
    void getPosition(CommandOrigin const&, Vec3 const&)const;
};
