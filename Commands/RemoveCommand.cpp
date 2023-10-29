#include "RemoveCommand.hpp"

RemoveCommand::RemoveCommand(std::shared_ptr<Document> doc) : m_doc(doc)
{
}

std::string RemoveCommand::exec(std::vector<std::unique_ptr<Item>> &itemList)
{
    
    


    return m_doc->removeSlide(/* arguments... */);
}
