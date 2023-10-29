#include "AddCommandFactory.hpp"

#include "../Commands/AddCommand.hpp"
#include "Tokenizer.hpp"

std::unique_ptr<Command> AddCommandFactory::createCommand(const std::string& input)
{
    std::unique_ptr<AddCommand> cmd = std::make_unique<AddCommand>(m_doc);
    Tokenizer tokenizer;
    auto tokens = tokenizer.split(input);    

    // std::string input = "add -type rect -x1 1 -y1 2 -x2 3 -y2 4";

    if(tokens[2] == "slide"){
        cmd->setItemType(Item::Type::Slide);
    }
    else {
        cmd->setItemType(Item::Type::Item);
    }

    /// in call of add item in slide class, already pass ready item

    std::unique_ptr<Item> item = m_itemRegistry[tokens[2]]->createItem(tokens);
    
    return std::move(cmd);

}