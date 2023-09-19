#include "SubCommand.hpp"

#include <numeric>
#include <functional>

#include <iostream>
#include <stdexcept>

double SubCommand::execute(){

    return std::accumulate( std::next(operands.begin()), operands.end(), *operands.begin(),  std::minus<double>{});
}

std::unique_ptr<Command> SubCommand::clone() const
{
    return std::make_unique<SubCommand>(*this);
}
