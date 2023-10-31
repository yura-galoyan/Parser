#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"
class Document;
class AddCommand : public Command
{
public:
    AddCommand(std::shared_ptr<Document> doc);
    std::string exec() override;
    void setItemType(Item::Type type);
    void setActiveItem(std::unique_ptr<Item>&& item);

private:
    std::unique_ptr<Item> activeItem;
private:
    std::shared_ptr<Document> m_doc;
    Item::Type m_type{Item::Type::Item};

};


#endif //ADD_COMMAND_HPP