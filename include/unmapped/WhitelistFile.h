#pragma once

#include "../core/Path"


class WhitelistFile {

public:

    WhitelistFile(Core::Path const&);
    void reload(void);
    void getWhitelist(void)const;
    void syncToDisc(void);
};
