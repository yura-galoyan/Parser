#include "AddCommand.hpp"

#include "../../Director/Director.hpp"

AddCommand::AddCommand()
{

}

std::string AddCommand::exec(){

    auto docRef = Director::getInstance().getDocument();
    docRef.getCurrSlide().addItem(std::move(activeItem));
    emit Director::getInstance().drawOnScreen();
    return "item added";
}

void AddCommand::setItemType(Item::Type type){
    m_type = type;
}

void AddCommand::setActiveItem(std::unique_ptr<Item> item)
{
    activeItem = std::move(item);
}
