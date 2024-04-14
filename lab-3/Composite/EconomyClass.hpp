#pragma once

#include "Aircraft.hpp"

class EconomyClass : public Aircraft
{

public:
    EconomyClass()
    {
        p_maxBaggageWeight = 20;
        p_maxCapacity = 150;
    }
};
