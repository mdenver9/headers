#pragma once

#include "../Command.h"


class FunctionCommand : public Command {

public:
    virtual ~FunctionCommand(); // _ZN15FunctionCommandD2Ev
    virtual void __fake_function0(); // fake
    virtual void execute(CommandOrigin const&, CommandOutput &)const; // _ZNK15FunctionCommand7executeERK13CommandOriginR13CommandOutput
    FunctionCommand(); // _ZN15FunctionCommandC2Ev
    void setup(CommandRegistry &); // _ZN15FunctionCommand5setupER15CommandRegistry
};
