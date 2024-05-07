#include <iostream>

#include "FixText.hpp"

int main(int argc, char const *argv[])
{
    std::string data = "  I <hope > ,  \t  \n\n( _this freaking ) \t trash_text!will fixed,   _ !";
    FixText context;
    data = context.ParseText(data);
    std::cout << data << std::endl;

    return 0;
}
