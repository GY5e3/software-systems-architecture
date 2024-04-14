#pragma once

#include "Aircraft.hpp"

class FirstClass : public Aircraft
{
public:
    FirstClass()
    {
        p_maxBaggageWeight = 60;
        p_maxCapacity = 10;
    }
};

