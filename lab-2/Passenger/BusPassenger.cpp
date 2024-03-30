#include "BusPassenger.h"

BusPassenger::BusPassenger()
{
    p_name = "Default";
    p_passengerType = PassengerType::Adult;
}
BusPassenger::BusPassenger(std::string name, PassengerType passengerType)
{
    p_name = name;
    p_passengerType = passengerType;
}
std::string BusPassenger::GetAllInformation()
{
    return p_name;
}