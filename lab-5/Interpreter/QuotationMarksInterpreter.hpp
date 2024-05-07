#pragma once

#include "Interpreter.hpp"

class QuotationMarksInterpreter : public Interpreter
{
public:
    std::string TextParser(std::string text) override;
};