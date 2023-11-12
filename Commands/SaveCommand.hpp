#ifndef SAVECOMMAND_HPP
#define SAVECOMMAND_HPP

#include "../Items/Document.hpp"
#include "Command.hpp"


class SaveCommand : public Command
{
public:
    SaveCommand(std::shared_ptr<Document> doc, std::unique_ptr<iSerializer> serializer);
    std::string exec() override ;

private:
    std::shared_ptr<Document> m_doc;
    std::unique_ptr<iSerializer> m_serializer;
};


#endif //SAVECOMMAND_HPP