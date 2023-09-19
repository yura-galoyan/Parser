#include "Command.hpp"

Command::Command(){
    options.insert("-op1");
    options.insert("-op2");
}

void Command::addOperand(std::pair<std::string, double> operandsPair)
{
    operands.push_back(operandsPair);
}