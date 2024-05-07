#include "DashInterpreter.hpp"

std::string DashInterpreter::TextParser(std::string text)
{
    for (int i = 1; i < text.length() - 1; i++)
    {
        if (isLetter(text[i - 1]) && isLetter(text[i + 1]) && text[i] == '_')
            text[i] = '-';
    }
    return text;
}

bool DashInterpreter::isLetter(char symbol)
{
    return 'a' <= symbol && symbol <= 'z' || 'A' <= symbol && symbol <= 'Z';
}