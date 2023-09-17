#include "Command.hpp"

void Command::addOperand(std::pair<std::string, double> operandsPair){
    operands.push_back(operandsPair);
}