#include "ConsoleInputOutput.hpp"

#include <iostream>

std::string ConsoleInputOutput::getInput() const {
    std::string input;
    std::getline(std::cin,input);
    return input;
}

void ConsoleInputOutput::output(const std::string_view& out) const{
    std::cout << out << std::endl;
}

