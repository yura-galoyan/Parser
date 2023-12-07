#ifndef ADDSLIDE_COMMAND_HPP
#define ADDSLIDE_COMMAND_HPP

#include "Command.hpp"

class Document;

class AddSlideCommand : public Command
{
public:
    AddSlideCommand(std::shared_ptr<Document> doc);
    std::string exec() override;

private:
    std::shared_ptr<Document> m_doc;
};

#endif // ADDSLIDE_COMMAND_HPP