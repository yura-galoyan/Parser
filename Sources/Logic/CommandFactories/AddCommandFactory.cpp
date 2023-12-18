#include "AddCommandFactory.hpp"

#include "../Commands/AddCommand.hpp"

#include <iostream>
#include <iomanip>
std::unique_ptr<Command> AddCommandFactory::createCommand(const std::string& input) 
{
    auto cmd = std::make_unique<AddCommand>();
    const auto tokens = tokenizer.split(input);    

    //  "add -type rect -x1 100 -y1 200 -x2 300 -y2 400 -color red";

    std::unique_ptr<Item> item = m_itemRegistry[tokens[2]]->createItem(tokens);
    
    cmd->setActiveItem(std::move(item));
    return cmd;

}