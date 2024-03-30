#pragma once


#include "../Driver/Driver.h"
#include "../Passenger/Passenger.h"
#include "vector"

class Board
{
public:
    Driver *p_driver = nullptr;
    short MAX_SIZE;
    std::vector<Passenger*> p_passengers;
    bool needBabySeat;
};