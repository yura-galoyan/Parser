#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"
class AddCommand : public Command
{
public:
    AddCommand();
    std::string exec() override;
    void setItemType(Item::Type type);
    void setActiveItem(std::unique_ptr<Item> item);

private:
    std::unique_ptr<Item> activeItem;
    
private:
    Item::Type m_type;

};


#endif //ADD_COMMAND_HPP