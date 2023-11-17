#include "../Serializer/iSerializer.hpp"
#include "LoadCommand.hpp"


LoadCommand::LoadCommand(std::shared_ptr<Document> doc, std::unique_ptr<iSerializer> serializer, std::stringstream input) 
    : m_doc{doc}, m_input{std::move(input)}, m_serializer{std::move(serializer)}
{
    m_serializer->setStream(std::move(m_input));
}


std::string LoadCommand::exec()
{
    
    m_serializer->visit(*m_doc);

    return "";
}
