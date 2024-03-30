#pragma once

#include "Passenger.h"

class TaxiPassenger : public Passenger
{
public:
    TaxiPassenger();
    TaxiPassenger(std::string name, PassengerType passengerType, bool needBabySeat);

    std::string GetAllInformation() override;
private:
    bool p_needBabySeat;
};