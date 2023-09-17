#ifndef COMMAND_REGISTRY_HPP
#define COMMAND_REGISTRY_HPP

#include "Commands/Command.hpp"
#include <memory>
#include <string>
#include <unordered_map>

class CommandRegistry
{
public:
    using CommandPtr = std::unique_ptr<Command>;

public:
    CommandRegistry();
    CommandPtr getCommand(std::string key);

private:
    std::unordered_map<std::string, CommandPtr> commands;

};

#endif //COMMAND_REGISTRY_HPP