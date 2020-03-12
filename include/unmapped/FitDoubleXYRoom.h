#pragma once

#include <memory>
#include "MonumentRoomFitter.h"


class FitDoubleXYRoom : MonumentRoomFitter {

public:
    virtual void fits(std::shared_ptr<RoomDefinition> &);
    virtual void create(int &, std::shared_ptr<RoomDefinition> &, Random &);
    ~FitDoubleXYRoom();
    FitDoubleXYRoom();
};
