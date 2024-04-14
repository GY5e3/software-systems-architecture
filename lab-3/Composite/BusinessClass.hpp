#pragma once

#include "Aircraft.hpp"

class BusinessClass : public Aircraft
{
public:
    BusinessClass() {
        p_maxBaggageWeight = 35;
        p_maxCapacity = 20;     
    }
};

