#include "AddSlideCommandFactory.hpp"
#include "../Commands/AddSlideCommand.hpp"

std::unique_ptr<Command> AddSlideCommandFactory::createCommand(const std::string &input) 
{
    auto cmd = std::make_unique<AddSlideCommand>();
    return cmd;
}