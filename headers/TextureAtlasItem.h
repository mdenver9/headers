#pragma once

class TextureAtlasItem {

public:

    void TextureAtlasItem(void);
    void uvCount(void)const;
    void TextureAtlasItem(TextureAtlasItem const&);
    void TextureAtlasItem(TextureAtlasItem&&);
    void TextureAtlasItem(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, unsigned long);
};
