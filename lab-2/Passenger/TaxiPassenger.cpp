#include "TaxiPassenger.h"

TaxiPassenger::TaxiPassenger()
{
    p_name = "Default";
    p_passengerType = PassengerType::Adult;
}
TaxiPassenger::TaxiPassenger(std::string name, PassengerType passengerType)
{
    p_name = name;

    if(passengerType == PassengerType::Beneficiary) {
        std::cout << "TaxiPassenger can`t be beneficiary" << std::endl;
        return;
    }
    p_passengerType = passengerType;
}

std::string TaxiPassenger::GetAllInformation()
{
    return p_name;
}