#include "AddCommandFactory.hpp"

#include "../Commands/AddCommand.hpp"

#include <iostream>
#include <iomanip>
std::unique_ptr<Command> AddCommandFactory::createCommand(const std::string& input) 
{
    auto cmd = std::make_unique<AddCommand>(m_doc);
    auto tokens = tokenizer.split(input);    

    //  "add -type rect -x1 1 -y1 2 -x2 3 -y2 4";
    std::unique_ptr<Item> item = m_itemRegistry[tokens[2]]->createItem(tokens);
    
    cmd->setActiveItem(std::move(item));
    return cmd;

}