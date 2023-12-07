#ifndef LOAD_COMMAND_FACTORY_HPP
#define LOAD_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// FIXME: resolve this 
class Document;

class LoadCommandFactory : public CommandFactory
{
public:
    LoadCommandFactory(std::shared_ptr<Document> doc) : m_doc(doc) { }
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

private:
    std::shared_ptr<Document> m_doc;
};



#endif //LOAD_COMMAND_FACTORY_HPP