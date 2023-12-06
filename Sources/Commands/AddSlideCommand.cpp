#include "AddSlideCommand.hpp"

#include "../Items/Document.hpp"

AddSlideCommand::AddSlideCommand(std::shared_ptr<Document> doc) : m_doc{doc}
{
}

std::string AddSlideCommand::exec()
{
    m_doc->addSlide(Slide{});
    return "slide added";
}