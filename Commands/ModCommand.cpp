#include "ModCommand.hpp"

#include <stdexcept>
#include <functional>

double ModCommand::execute(){
    return static_cast<int>(operands[0].second) % static_cast<int>(operands[1].second);
}

std::unique_ptr<Command> ModCommand::clone() const
{
    return std::make_unique<ModCommand>(*this);
}
