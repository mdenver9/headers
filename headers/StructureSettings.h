#pragma once

class StructureSettings {

public:
    static long StructureSettings::DEFAULT_STRUCTURE_SIZE;
    static long StructureSettings::DEFAULT_STRUCTURE_OFFSET;


    void StructureSettings(StructureSettings const&);
    void StructureSettings(StructureSettings&&);
    void StructureSettings(void);
    void setPaletteName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void setIgnoreEntities(bool);
    void getIgnoreEntities(void)const;
    void getIgnoreBlocks(void)const;
    void setIgnoreBlocks(bool);
    void getStructureSize(void)const;
    void setStructureSize(BlockPos const&);
    void getStructureOffset(void)const;
    void setStructureOffset(BlockPos const&);
    void getPivot(void)const;
    void setPivot(Vec3 const&);
    void getLastTouchedByPlayerID(void)const;
    void setLastTouchedByPlayerID(ActorUniqueID);
    void getRotation(void)const;
    void setRotation(Rotation);
    void getMirror(void)const;
    void setMirror(Mirror);
    void getIntegrityValue(void)const;
    void setIntegrityValue(float);
    void getIntegritySeed(void)const;
    void setIntegritySeed(unsigned int);
};
