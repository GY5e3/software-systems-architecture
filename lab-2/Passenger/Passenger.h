#pragma once

#include <string>
#include <iostream>

#include "PassengerType.h"

class Passenger {
public:
    virtual std::string GetAllInformation() = 0;
protected:
    std::string p_name;
    PassengerType p_passengerType;

};