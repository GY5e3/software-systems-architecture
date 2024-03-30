//#pragma once

#include "BoardFactory.h"
#include "../Board/BoardBus.h"

class BusFactory : public TransportFactory
{
public:
    BoardAnyCar* CreateBoard() override;
};