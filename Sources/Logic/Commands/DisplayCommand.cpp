#include "DisplayCommand.hpp"


#include "../../Director/Director.hpp"

DisplayCommand::DisplayCommand() 
{
}

std::string DisplayCommand::exec()
{
    Director::getInstance().getDocument().displayContent();
    return "Items are displayed";
}

void DisplayCommand::setItemType(std::string itemName)
{
}

