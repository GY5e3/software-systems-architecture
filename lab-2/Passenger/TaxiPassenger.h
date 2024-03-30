#pragma once

#include "Passenger.h"

class TaxiPassenger : public Passenger
{
public:
    TaxiPassenger();
    TaxiPassenger(std::string name, PassengerType passengerType);

    std::string GetAllInformation() override;
};