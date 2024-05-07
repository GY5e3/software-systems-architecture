#pragma once

#include "Interpreter.hpp"

class DashInterpreter : public Interpreter
{
public:
    std::string TextParser(std::string text) override;

private:
    bool isLetter(char symbol);
};