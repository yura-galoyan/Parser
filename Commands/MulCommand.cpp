#include "MulCommand.hpp"

#include <numeric>
#include <functional>
#include <stdexcept>

double MulCommand::execute(){
    return std::accumulate( operands.begin(), operands.end(), 1, std::multiplies<double>{});
}

std::unique_ptr<Command> MulCommand::clone() const
{
    return std::make_unique<MulCommand>(*this);
}
