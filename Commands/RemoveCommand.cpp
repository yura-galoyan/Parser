#include "RemoveCommand.hpp"

RemoveCommand::RemoveCommand(std::shared_ptr<Document> doc) : m_doc(doc)
{
}

std::string RemoveCommand::exec()
{
    m_doc->getCurrSlide().removeItem(m_id);
}
