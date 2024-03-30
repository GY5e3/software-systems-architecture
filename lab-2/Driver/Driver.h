#pragma once

class Driver
{
public:
    virtual char GetCategory() const { return p_category; }
protected:
    char p_category;
};