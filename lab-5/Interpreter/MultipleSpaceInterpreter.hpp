#pragma once

#include "Interpreter.hpp"

class MultipleSpaceInterpreter : public Interpreter
{
public:
    std::string TextParser(std::string text) override;
};