#include "CommandParser.hpp"

std::unique_ptr<Command> CommandParser::getCommand(std::string key){
    std::istringstream in(key);
    std::string tmp;
    in >> tmp;
    return m_registry.findCommand(tmp);
}