#pragma once

#include <iostream>

class Passenger
{
public:
    Passenger();
    Passenger(std::string name);

private:
    std::string p_name;
};