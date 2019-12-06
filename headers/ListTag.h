#pragma once

class ListTag : Tag {

public:
    virtual ~ListTag();
    virtual void deleteChildren(void);
    virtual void write(IDataOutput &)const;
    virtual void load(IDataInput &);
    virtual void getId(void)const;
    virtual void equals(Tag const&)const;
    virtual void print(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, PrintStream &)const;
    virtual void copy(void)const;
    virtual void hash(void)const;

    void ListTag(ListTag&&);
    void ListTag(void);
    void add(std::unique_ptr<Tag, std::default_delete<Tag>>);
    void get(int)const;
    void size(void)const;
    void getFloat(int)const;
    void getInt(int)const;
    void getDouble(int)const;
    void getCompound(unsigned long)const;
};
