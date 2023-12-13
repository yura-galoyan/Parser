#ifndef LOAD_COMMAND_FACTORY_HPP
#define LOAD_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// FIXME: resolve this 
class Document;

class LoadCommandFactory : public CommandFactory
{
public:
    LoadCommandFactory() { }
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

};



#endif //LOAD_COMMAND_FACTORY_HPP