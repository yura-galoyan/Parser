#include "../Serializer/iSerializer.hpp"
#include "LoadCommand.hpp"
#include "../../Director/Director.hpp"


LoadCommand::LoadCommand(std::unique_ptr<iSerializer> serializer, std::stringstream input) 
    : m_input{std::move(input)}, m_serializer{std::move(serializer)}
{
    m_serializer->setStream(std::move(m_input));
}


std::string LoadCommand::exec()
{
    
    m_serializer->visit(Director::getInstance().getDocument());

    Director::getInstance().onDocumentChanged();

    return "files are loaded";
}
