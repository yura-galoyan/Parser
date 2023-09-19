#include "AddCommand.hpp"

#include <numeric>
#include <stdexcept>
#include <algorithm>
#include <iterator>

#include <iostream>

AddCommand::AddCommand(){
}

double AddCommand::execute(){
    
    std::vector<double> args;
    std::transform(operands.begin(),operands.end(), std::back_inserter(args), [](const auto& arg){  return arg.second;  });
    return operands.front().second + operands.back().second;
}

std::unique_ptr<Command> AddCommand::clone() const
{
    return std::make_unique<AddCommand>(*this);
}
