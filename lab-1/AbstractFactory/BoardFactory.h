#pragma once

#include "../Board/BoardAnyCar.h"
#include "../Driver/BusDriver.h"

class TransportFactory
{
public:
    virtual BoardAnyCar* CreateBoard() = 0;
};
