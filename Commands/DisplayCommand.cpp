#include "DisplayCommand.hpp"

DisplayCommand::DisplayCommand()
{

}

std::string DisplayCommand::exec(std::vector<std::unique_ptr<Item>> &itemList)
{
    // display item list

    return "items are displayed";
}

void DisplayCommand::setItemType(std::string itemName)
{
}

std::unique_ptr<Command> DisplayCommand::clone() const
{
    return std::make_unique<DisplayCommand>(); 
}

bool DisplayCommand::hasOption(std::string)
{
    return false;
}
