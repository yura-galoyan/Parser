#include "CommandRegistry.hpp"
#include "DisplayCommand.hpp"
#include "AddCommand.hpp"

#include <stdexcept>

CommandRegistry::CommandRegistry(){
    m_commands["add"] = std::make_unique<AddCommand>();
    m_commands["display"] = std::make_unique<DisplayCommand>();
    // m_commands["quit"] = std::make_unique<AddCommand>();
}

std::unique_ptr<Command> CommandRegistry::findCommand(std::string key) const{
    auto command = m_commands.find(key);
    if(command == m_commands.end()){
        throw std::runtime_error{"invalid command"};
    }
    return command->second->clone();
}