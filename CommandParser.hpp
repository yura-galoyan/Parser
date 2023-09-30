#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP

#include <memory>
#include <sstream>
#include "Command.hpp"
#include "CommandRegistry.hpp"


class CommandParser
{
public:
    std::unique_ptr<Command> getCommand(std::string key);

private:
    CommandRegistry m_registry;
};

#endif //COMMAND_PARSER_HPP