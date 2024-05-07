#include "NeedlessSpaceWithPunctuationMarkInterpreter.hpp"

NeedlessSpaceWithPunctuationMarkInterpreter::NeedlessSpaceWithPunctuationMarkInterpreter()
{
    p_punctuationMarks.insert(',');
    p_punctuationMarks.insert(')');
    p_punctuationMarks.insert('!');
    p_punctuationMarks.insert('?');
    p_punctuationMarks.insert('.');
    p_punctuationMarks.insert('>');
}
std::string NeedlessSpaceWithPunctuationMarkInterpreter::TextParser(std::string text)
{
    int left = 0, right = 0;
    while (right < text.length() - 1)
    {
        if (text[right] == ' ' && p_punctuationMarks.find(text[right + 1]) != p_punctuationMarks.end())
            right++;
        text[left++] = text[right++];
    }
    text = text.substr(0, left);

    left = 0;
    right = 0;
    while (right < text.length() - 1)
    {
        text[left] = text[right];
        if ((text[right] == '(' || text[right] == '<') && text[right + 1] == ' ')
        {
            right++;
        }
        left++;
        right++;
    }
    return text.substr(0, left);
}