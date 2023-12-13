#ifndef SAVE_COMMAND_FACTORY_HPP
#define SAVE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// FIXME: resolve this 
class Document;

class SaveCommandFactory : public CommandFactory
{
public:
    SaveCommandFactory()  { }
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

};




#endif //SAVE_COMMAND_FACTORY_HPP