#include "MultipleSpaceInterpreter.hpp"

std::string MultipleSpaceInterpreter::TextParser(std::string text) 
{
    int left = 0, right = 0;
    while (right < text.length())
    {
        text[left] = text[right++];
        while (text[left] == ' ' && text[right] == ' ')
            right++;
        left++;
    }
    return text.substr(0, left);
}