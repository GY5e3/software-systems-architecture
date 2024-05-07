#include "TabulationInterpreter.hpp"

std::string TabulationInterpreter::TextParser(std::string text)
{
    int pos;
    while ((pos = text.find('\t')) != std::string::npos)
    {
        text.replace(pos, 1, " ");
    }
    return text;
}