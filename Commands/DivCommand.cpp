#include "DivCommand.hpp"

#include <stdexcept>

#include <numeric>
#include <functional>

double DivCommand::execute(){
    return std::accumulate(std::next(operands.begin()), operands.end(), *operands.begin(), std::divides<double>{} );
}

std::unique_ptr<Command> DivCommand::clone() const
{
    return std::make_unique<DivCommand>(*this);
}
