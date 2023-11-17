#ifndef ADDSLIDE_COMMAND_FACTORY_HPP
#define ADDSLIDE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"


/// FIXME: resolve this 
class Document;
class Slide;

class AddSlideCommandFactory : public CommandFactory
{
public:
    AddSlideCommandFactory(std::shared_ptr<Document> doc, std::shared_ptr<Slide> slide = nullptr) : m_doc(doc) { };
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

private:
    std::shared_ptr<Document> m_doc;

};

#endif //ADDSLIDE_COMMAND_FACTORY_HPP