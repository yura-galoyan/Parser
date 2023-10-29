#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "../Items/Document.hpp"
#include "Command.hpp"

class AddCommand : public Command
{
public:
    AddCommand(std::shared_ptr<Document> doc);
    std::string exec() override;
    void setItemType(Item::Type type);

private:
    std::string m_itemName;
    std::unordered_map<std::string,
    std::unordered_set<std::string>> m_args;

private:
    std::shared_ptr<Document> m_doc;
    Item::Type m_type{Item::Type::Item};

};


#endif //ADD_COMMAND_HPP