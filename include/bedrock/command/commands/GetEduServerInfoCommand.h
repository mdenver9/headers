#pragma once

class GetEduServerInfoCommand : Command {

public:
    virtual GetEduServerInfoCommand::~GetEduServerInfoCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    GetEduServerInfoCommand(void);
};