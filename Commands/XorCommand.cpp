#include "XorCommand.hpp"

#include <stdexcept>
#include <numeric>
#include <functional>

double XorCommand::execute(){
    return std::accumulate(operands.begin(), operands.end(), 0) % 2;
}

std::unique_ptr<Command> XorCommand::clone() const {
    return std::make_unique<XorCommand>(*this);
}
