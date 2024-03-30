//#pragma once

#include "BoardAnyCar.h"

class BoardBus : public BoardAnyCar
{
public:
    BoardBus();
    bool BoardDriver(Driver driver) override;
    bool BoardPassenger() override;
    void Go() override;
};