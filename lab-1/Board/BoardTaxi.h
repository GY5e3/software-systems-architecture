//#pragma once

#include "BoardAnyCar.h"

class BoardTaxi : public BoardAnyCar
{
public:
    BoardTaxi();

    bool BoardDriver(Driver driver) override;
    
    bool BoardPassenger() override;

    void Go() override;
};