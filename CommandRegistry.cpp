#include "CommandRegistry.hpp"
#include "Commands/AddCommand.hpp"

#include <stdexcept>

CommandRegistry::CommandRegistry(){
    commands["add"] = std::make_unique<AddCommand>();
}

CommandRegistry::CommandPtr CommandRegistry::getCommand(std::string key){
    if(commands.find(key) == commands.end()){
        throw std::runtime_error{"unknown command"};
    }
    return commands.find(key)->second->clone();
}