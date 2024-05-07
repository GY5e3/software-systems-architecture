#include "EnterInterpreter.hpp"

std::string EnterInterpreter::TextParser(std::string text)
{
    int left = 0, right = 0;
    while (right < text.length())
    {
        text[left] = text[right++];
        while (text[left] == '\n' && text[right] == '\n')
            right++;
        left++;
    }
    return text.substr(0, left);
}