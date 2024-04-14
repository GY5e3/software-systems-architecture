#pragma once

#include <string>

#include "../Component/BoardComponent.hpp"

class Pilot : public BoardComponent
{
public:
    Pilot(std::string name);
    int GetBaggageWeight() override;
private:
    std::string p_name;
};

