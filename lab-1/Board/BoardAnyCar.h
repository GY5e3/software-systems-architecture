#pragma once

#include "../Driver/Driver.h"
#include "../Passenger/Passenger.h"
#include <vector>

class BoardAnyCar
{
public:
    virtual bool BoardPassenger() = 0;
    virtual bool BoardDriver(Driver driver) = 0;
    virtual void Go() = 0;
protected:
    bool p_hasDriver;
    short MAX_SIZE;
    std::vector<Passenger> p_passengers;
};