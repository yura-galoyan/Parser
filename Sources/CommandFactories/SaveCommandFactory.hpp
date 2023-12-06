#ifndef SAVE_COMMAND_FACTORY_HPP
#define SAVE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// FIXME: resolve this 
class Document;

class SaveCommandFactory : public CommandFactory
{
public:
    SaveCommandFactory(std::shared_ptr<Document> doc) : m_doc(doc) { }
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

private:
    std::shared_ptr<Document> m_doc;
};




#endif //SAVE_COMMAND_FACTORY_HPP