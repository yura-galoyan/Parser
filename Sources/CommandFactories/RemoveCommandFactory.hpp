#ifndef REMOVE_COMMAND_FACTORY_HPP
#define REMOVE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// FIXME: resolve this 
class Document;

class RemoveCommandFactory : public CommandFactory
{
public:
    RemoveCommandFactory(std::shared_ptr<Document> doc) : m_doc(doc) { }
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

private:
    std::shared_ptr<Document> m_doc;
};


#endif //REMOVE_COMMAND_FACTORY_HPP