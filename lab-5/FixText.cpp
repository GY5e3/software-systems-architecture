#include "FixText.hpp"

FixText::FixText() { addInterpreters(); }

std::string FixText::ParseText(std::string text)
{
    for (auto operation : p_interpreters)
    {
        text = operation->TextParser(text);
    }
    return text;
}

void FixText::addInterpreters()
{
    p_interpreters.push_back(std::make_shared<TabulationInterpreter>());
    p_interpreters.push_back(std::make_shared<EnterInterpreter>());
    p_interpreters.push_back(std::make_shared<MultipleSpaceInterpreter>());
    p_interpreters.push_back(std::make_shared<DashInterpreter>());
    p_interpreters.push_back(std::make_shared<NeedlessSpaceWithPunctuationMarkInterpreter>());
    p_interpreters.push_back(std::make_shared<QuotationMarksInterpreter>());
}