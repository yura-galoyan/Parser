#include "Command.hpp"


void Command::addArgument(std::string key, double value){
    m_arguments[key] = value;
}
