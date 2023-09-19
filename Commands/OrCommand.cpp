#include "OrCommand.hpp"

#include <stdexcept>
#include <functional>
#include <numeric>

double OrCommand::execute(){

    return std::accumulate(operands.begin(), operands.end(), 0, std::logical_or<double>{});
}

std::unique_ptr<Command> OrCommand::clone() const
{
    return std::make_unique<OrCommand>(*this);
}
