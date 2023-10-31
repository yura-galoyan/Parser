#include "DisplayCommand.hpp"

DisplayCommand::DisplayCommand(std::shared_ptr<Document>& doc) : m_doc{doc}
{
}

std::string DisplayCommand::exec()
{
    m_doc->displayContent();
    return "Items are displayed";
}

void DisplayCommand::setItemType(std::string itemName)
{
}

