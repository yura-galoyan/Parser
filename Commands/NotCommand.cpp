#include "NotCommand.hpp"

#include <stdexcept> 

#include <iostream>

double NotCommand::execute(){
    return !static_cast<bool>(operands[0].second);
}

std::unique_ptr<Command> NotCommand::clone() const
{
    return std::make_unique<NotCommand>(*this);
}
