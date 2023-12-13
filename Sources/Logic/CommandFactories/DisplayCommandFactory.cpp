#include "DisplayCommandFactory.hpp"

#include "../Commands/DisplayCommand.hpp"

std::unique_ptr<Command> DisplayCommandFactory::createCommand(const std::string &input) 
{
    auto cmd = std::make_unique<DisplayCommand>();
    return std::move(cmd);
}