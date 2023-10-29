#include <algorithm>

#include "AddCommand.hpp"
#include "Rect.hpp"


AddCommand::AddCommand(std::shared_ptr<Document> doc) 
: m_doc(doc)
{

}

std::string AddCommand::exec()
{
    
}

void AddCommand::setItemType(Item::Type type){
    m_type = type;
}

