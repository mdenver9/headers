#pragma once

class BiomeFilterGroup : FilterGroup {

    virtual void BiomeFilterGroup::~BiomeFilterGroup();
    virtual void BiomeFilterGroup::~BiomeFilterGroup();
    virtual void _createSubgroup(FilterGroup::CollectionType)const;
    virtual void _setupContext(FilterTest const&, FilterContext &)const;
    virtual void _handleUnknownMember(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
}
