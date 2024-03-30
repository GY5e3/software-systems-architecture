#pragma once

#include <iostream>

#include "BoardBuilder.h"

#include "../Driver/TaxiDriver.h"
#include "../Passenger/TaxiPassenger.h"

class TaxiBoardBuilder : public BoardBuilder
{
public:
    TaxiBoardBuilder();
    void BuildDriver() override;
    void BuildPassenger() override;
    void BuildBabySeat() override;
    Board GetBoard()override;
};