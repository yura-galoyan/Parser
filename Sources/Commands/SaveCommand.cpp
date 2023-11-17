#include "SaveCommand.hpp"

#include "../Serializer/txtSerializer.hpp"

#include <iostream>
SaveCommand::SaveCommand(std::shared_ptr<Document> doc, std::unique_ptr<iSerializer> serializer) 
    : m_doc{doc}, m_serializer{std::move(serializer)}
{
}


std::string SaveCommand::exec()
{
    m_serializer->visit(*m_doc);
    auto result = m_serializer->stealResult();
    std::cout << "file contents will be:\n" << 
    result.str() << std::endl;

    return "Document saved succesfully!!!";
}
