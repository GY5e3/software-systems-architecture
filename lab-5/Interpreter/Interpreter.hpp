#pragma once

#include <string>

class Interpreter
{
public:
    virtual std::string TextParser(std::string text) = 0;
};