#ifndef LOAD_COMMAND_HPP
#define LOAD_COMMAND_HPP


#include "../Items/Document.hpp"
#include "Command.hpp"

class LoadCommand : public Command
{
public:
    LoadCommand(std::shared_ptr<Document> doc, std::unique_ptr<iSerializer> serializer, std::stringstream input);
    std::string exec() override ;

private:
    std::unique_ptr<iSerializer> m_serializer;
    std::stringstream m_input;
    std::shared_ptr<Document> m_doc;

};



#endif //LOAD_COMMAND_HPP
