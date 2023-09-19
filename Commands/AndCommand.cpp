#include "AndCommand.hpp"

#include <stdexcept>
#include <functional>
#include <numeric>

AndCommand::AndCommand(){
}

double AndCommand::execute()
{
    return std::accumulate(operands.begin(), operands.end(), 1, std::logical_and<double>{});
}

std::unique_ptr<Command> AndCommand::clone() const
{
    return std::make_unique<AndCommand>(*this);
}
