#pragma once

#include "../../../unmapped/ScriptServerContext"
#include "../ScriptVersionInfo"


class ScriptServerChatReceived : ScriptTemplateFactory<ScriptServerContext>::ReceivedEvent {

public:
    static long mHash;

    virtual ScriptServerChatReceived::~ScriptServerChatReceived();
    virtual void receivedEvent(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle const&);
    virtual void getEventData(ScriptApi::ScriptVersionInfo const&, ScriptEngine &, ScriptServerContext &, std::string const&, ScriptApi::ScriptObjectHandle &);

    void getHash(void);
    ScriptServerChatReceived(void);
};
