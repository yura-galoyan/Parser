#ifndef REMOVE_COMMAND_FACTORY_HPP
#define REMOVE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// FIXME: resolve this 
class Document;

class RemoveCommandFactory : public CommandFactory
{
public:
    RemoveCommandFactory() { }
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

};


#endif //REMOVE_COMMAND_FACTORY_HPP