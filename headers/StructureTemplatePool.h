#pragma once

class StructureTemplatePool {

public:

    void StructureTemplatePool(void);
    void StructureTemplatePool(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::vector<std::pair<StructurePoolElement const*, int>, std::allocator<std::pair<StructurePoolElement const*, int>>> &);
    void getTemplate(unsigned long)const;
    void getRandomTemplate(Random &)const;
    void getShuffledTemplateIndexes(Random &)const;
    void size(void)const;
    bool isValid(void)const;
};
