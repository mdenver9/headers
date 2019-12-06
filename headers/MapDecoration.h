#pragma once

class MapDecoration {

public:

    void MapDecoration(MapDecoration const&);
    void MapDecoration(void);
    void MapDecoration(MapDecoration::Type, signed char, signed char, signed char, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Color const&);
    void getImg(void)const;
    void setImg(MapDecoration::Type);
    void getX(void)const;
    void setX(signed char);
    void getY(void)const;
    void setY(signed char);
    void getRot(void)const;
    void setRot(signed char);
    void equals(MapDecoration const&)const;
    bool isRenderedOnFrame(void)const;
    void hashCode(void);
    void setLabel(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void save(CompoundTag &);
    void load(CompoundTag const&);
    void getColor(void)const;
    void setColor(Color const&);
};
