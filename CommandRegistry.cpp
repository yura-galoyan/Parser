#include "CommandRegistry.hpp"

#include <stdexcept>

CommandRegistry::CommandPtr CommandRegistry::getCommand(std::string key){
    if(commands.find(key) == commands.end()){
        throw std::runtime_error{"unknown command"};
    }
    return commands.find(key)->second->clone();
}