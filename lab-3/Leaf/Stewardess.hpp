#pragma once

#include <string>

#include "../Component/BoardComponent.hpp"

class Stewardess : public BoardComponent
{
public:
    Stewardess(std::string name);
    int GetBaggageWeight() override;
private:
    std::string p_name;
};

