#pragma once

class FilterGroup {

public:
    virtual ~FilterGroup();
    virtual void _setupContext(FilterTest const&, FilterContext &)const;
    virtual void _handleUnknownMember(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);

    void FilterGroup(FilterGroup const&);
    void FilterGroup(FilterGroup::CollectionType);
    void evaluate(std::array<FilterContext, 7ul> &)const;
    void _evaluateMember(FilterTest const&, std::array<FilterContext, 7ul> &)const;
    void parse(Json::Value const&);
    void _parseObject(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void _parseTest(Json::Value const&);
    void _parseMember(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void _parseFilterInputs(Json::Value const&, FilterTest::Definition const&, FilterInputs &);
    void addFilterTest(FilterTest::Definition const&, FilterInputs const&);
    void _parseFilterParam(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&, FilterParamDefinition const&, FilterInput &);
    void addFilterTest(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, FilterInputs const&);
    void serialize(Json::Value &)const;
    void empty(void);
    void getMembers(void)const;
    void getChildren(void)const;
};
