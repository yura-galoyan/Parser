#ifndef DISPLAY_COMMAND_HPP
#define DISPLAY_COMMAND_HPP

#include "../Items/Document.hpp"
#include "Command.hpp"

class DisplayCommand : public Command
{
public:
    DisplayCommand(std::shared_ptr<Document>& doc);
    std::string exec() override;
    void setItemType(std::string itemName);

private:
    std::shared_ptr<Document> m_doc;
};


#endif //DISPLAY_COMMAND_HPP