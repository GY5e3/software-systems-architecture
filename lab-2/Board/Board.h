#pragma once

#include <vector>
#include <memory>

#include "../Driver/Driver.h"
#include "../Passenger/Passenger.h"

class Board
{
public:
    std::shared_ptr<Driver> driver = nullptr;
    short MAX_SIZE;
    std::vector<std::shared_ptr<Passenger>> passengers;
    bool needBabySeat;
};