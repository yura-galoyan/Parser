#include "HelpCommandFactory.hpp"

#include "../Commands/HelpCommand.hpp"

// draw -id id -o filepath

// where ["-o" = output file path]
std::unique_ptr<Command> HelpCommandFactory::createCommand(const std::string &input) 
{   
    auto cmd = std::make_unique<HelpCommand>();
    return std::move(cmd);
}

