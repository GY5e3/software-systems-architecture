#pragma once

#include <unordered_set>

#include "Interpreter.hpp"

class NeedlessSpaceWithPunctuationMarkInterpreter : public Interpreter
{
public:
    NeedlessSpaceWithPunctuationMarkInterpreter();

    std::string TextParser(std::string text) override;

private:
    std::unordered_set<char> p_punctuationMarks;
};