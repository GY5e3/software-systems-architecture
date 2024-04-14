#pragma once

#include <memory>

class BoardComponent {
public:
    virtual void Add(std::shared_ptr<BoardComponent> component) {return;}

    virtual void Remove(std::shared_ptr<BoardComponent> component) {return;}
    
    virtual int GetBaggageWeight() = 0;

    virtual void SetBaggageWeight(int) {return;}
};