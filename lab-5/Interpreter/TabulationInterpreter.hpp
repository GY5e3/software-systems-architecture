#pragma once

#include "Interpreter.hpp"

class TabulationInterpreter : public Interpreter
{
public:
    std::string TextParser(std::string text) override;
};