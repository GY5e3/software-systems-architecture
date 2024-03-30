#pragma once

#include "Passenger.h"

class BusPassenger : public Passenger
{
public:
    BusPassenger();
    BusPassenger(std::string name, PassengerType passengerType);
    
    std::string GetAllInformation() override;
};
