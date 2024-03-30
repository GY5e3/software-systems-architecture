#pragma once


#include "../Driver/Driver.h"
#include "../Passenger/Passenger.h"
#include "../Board/Board.h"

class BoardBuilder
{
public:
    virtual void BuildDriver() = 0;
    virtual void BuildPassenger() = 0;
    virtual void BuildBabySeat() {};
    virtual Board GetBoard() = 0;
protected:
    Board board;
};