#include <vector>
#include <memory>

#include "Interpreter/Interpreter.hpp"
#include "Interpreter/TabulationInterpreter.hpp"
#include "Interpreter/EnterInterpreter.hpp"
#include "Interpreter/MultipleSpaceInterpreter.hpp"
#include "Interpreter/DashInterpreter.hpp"
#include "Interpreter/NeedlessSpaceWithPunctuationMarkInterpreter.hpp"
#include "Interpreter/QuotationMarksInterpreter.hpp"

class FixText
{
public:
    FixText();

    std::string ParseText(std::string text);

private:
    std::vector<std::shared_ptr<Interpreter>> p_interpreters;

    void addInterpreters();
};