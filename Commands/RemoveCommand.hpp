#ifndef REMOVE_COMMAND_HPP
#define REMOVE_COMMAND_HPP

#include "Command.hpp"
#include "../Document.hpp"

class RemoveCommand : public Command
{
public:
    RemoveCommand(std::shared_ptr<Document> doc);
    std::string exec(std::vector<std::unique_ptr<Item>>& itemList );
    virtual std::unique_ptr<Command> clone() const;    



private:
    std::shared_ptr<Document> m_doc;

}


#endif //REMOVE_COMMAND_HPP