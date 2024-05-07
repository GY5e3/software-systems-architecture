#include "QuotationMarksInterpreter.hpp"

std::string QuotationMarksInterpreter::TextParser(std::string text)
{
    for (int i = 0; i < text.length(); i++)
    {
        if (text[i] == '<' || text[i] == '>')
            text[i] = '"';
    }
    return text;
}