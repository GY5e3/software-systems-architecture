//#pragma once

#include "BoardFactory.h"
#include "../Board/BoardTaxi.h"
#include "../Driver/TaxiDriver.h"

class TaxiFactory : public TransportFactory
{
public:
    BoardAnyCar* CreateBoard() override;
};