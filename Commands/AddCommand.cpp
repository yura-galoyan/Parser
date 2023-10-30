#include "AddCommand.hpp"


AddCommand::AddCommand(std::shared_ptr<Document> doc) 
: m_doc(doc)
{

}

std::string AddCommand::exec(){
    m_doc->getCurrSlide().addItem(std::move(activeItem));
}

void AddCommand::setItemType(Item::Type type){
    m_type = type;
}

void AddCommand::setActiveItem(std::unique_ptr<Item> &&item)
{
    activeItem = std::move(activeItem);
}
