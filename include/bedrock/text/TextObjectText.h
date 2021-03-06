#pragma once

#include <string>
#include "ITextObject.h"


class TextObjectText : public ITextObject {

public:
    virtual ~TextObjectText(); // _ZN14TextObjectTextD2Ev
    virtual void __fake_function0(); // fake
    virtual std::string asString()const; // _ZNK14TextObjectText8asStringB5cxx11Ev
    virtual bool asJsonValue()const; // _ZNK14TextObjectText11asJsonValueEv
    TextObjectText(std::string); // _ZN14TextObjectTextC2ENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
