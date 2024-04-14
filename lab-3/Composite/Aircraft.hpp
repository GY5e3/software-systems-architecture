#pragma once

#include <vector>
#include <memory>
#include <iostream>

#include "../Component/BoardComponent.hpp"

class Aircraft : public BoardComponent
{
public:
    void Add(std::shared_ptr<BoardComponent> component) override;

    void Remove(std::shared_ptr<BoardComponent> component) override;

    int GetBaggageWeight() override;

    std::vector<std::shared_ptr<BoardComponent>> components;
protected:
    
    int p_maxCapacity = 11;
    int p_maxBaggageWeight = 0;
};
