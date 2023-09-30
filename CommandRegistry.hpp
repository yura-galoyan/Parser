#ifndef COMMAND_REGISTRY_HPP
#define COMMAND_REGISTRY_HPP

#include <string>
#include <unordered_map>
#include <memory>
#include "Command.hpp"

class CommandRegistry
{
public:
    CommandRegistry();
    using Commands = std::unordered_map<std::string,std::unique_ptr<Command>>;

    std::unique_ptr<Command> findCommand(std::string key);

private:
    Commands m_commands;
};


#endif //COMMAND_REGISTRY_HPP