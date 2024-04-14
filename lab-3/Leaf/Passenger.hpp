#pragma once

#include <string>

#include "../Component/BoardComponent.hpp"

class Passenger : public BoardComponent
{
public:
    Passenger(int baggageWeight, std::string name);
    
    int GetBaggageWeight() override;

    void SetBaggageWeight(int weight) override;
private:
    int p_baggageWeight;
    std::string p_name;
};