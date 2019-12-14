#pragma once

class BoolOption : Option {

public:
    virtual ~BoolOption();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);

    void BoolOption(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, bool);
    void _set(bool, bool);
    void set(bool, bool);
    void setDefault(bool);
    void getDefault(void)const;
    void getValue(void)const;
    void setCoerceValueCallback(std::function<bool ()(bool)>);
    void toggle(void);
    void reset(void);
};
