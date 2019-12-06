#pragma once

class Blacklist {

public:

    void Blacklist(void);
    bool isBlocked(Blacklist::Entry const&)const;
    bool isBlocked(Blacklist::Entry const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const;
    void getDuration(Blacklist::Entry const&)const;
    void clear(void);
    void setEntries(std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>> const&);
    void addEntry(Blacklist::Entry const&);
    void removeEntry(Blacklist::Entry const&);
    bool isUUIDBlocked(mce::UUID const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const;
    bool isXUIDBlocked(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry, std::allocator<Blacklist::Entry>>> &)const;
};
