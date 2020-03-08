#pragma once

#include "../core/Path"


class ThirdPartyServer {

public:

    ThirdPartyServer(void);
    void getPort(void)const;
    void setImagePath(Core::Path const&);
    bool isXblRequired(void)const;
};
