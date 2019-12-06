#pragma once

class AgentCommandComponent {

public:

    void AgentCommandComponent(AgentCommandComponent&&);
    void AgentCommandComponent(void);
    void initFromDefinition(Actor &);
    void getCurrentCommand(void)const;
    void getWaitForNextCommandTicks(void);
    void setCurrentCommand(std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command>>);
    bool hasCommand(void);
    void addCommand(std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command>>);
};
