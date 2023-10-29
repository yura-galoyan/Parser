#ifndef REMOVE_COMMAND_HPP
#define REMOVE_COMMAND_HPP

#include "Command.hpp"
#include "../Items/Document.hpp"

class RemoveCommand : public Command
{
public:
    RemoveCommand(std::shared_ptr<Document> doc);
    std::string exec();
    void setId(std::string id) { m_id = std::stoi(id); };

private:
    int m_id;
    std::shared_ptr<Document> m_doc;

};


#endif //REMOVE_COMMAND_HPP