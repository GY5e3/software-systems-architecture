#pragma once

#include <iostream>

#include "BoardBuilder.h"
#include "../Driver/BusDriver.h"
#include "../Passenger/BusPassenger.h"

class BusBoardBuilder : public BoardBuilder
{
public:
    BusBoardBuilder();
    void BuildDriver() override;
    void BuildPassenger() override;
  //  void BuildBabySeat() override;
    Board GetBoard() override;
};