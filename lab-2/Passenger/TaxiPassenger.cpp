#include "TaxiPassenger.h"

TaxiPassenger::TaxiPassenger()
{
    p_name = "Default";
    p_passengerType = PassengerType::Adult;
    p_needBabySeat = false;
}
TaxiPassenger::TaxiPassenger(std::string name, PassengerType passengerType, bool needBabySeat)
{
    p_name = name;
    p_passengerType = passengerType;
    p_needBabySeat = needBabySeat;
}

std::string TaxiPassenger::GetAllInformation()
{
    return p_name;
}