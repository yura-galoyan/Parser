#include "SaveCommand.hpp"

#include "../Serializer/txtSerializer.hpp"
#include "../../Director/Director.hpp"

#include <iostream>

SaveCommand::SaveCommand( std::unique_ptr<iSerializer> serializer) 
    :m_serializer{std::move(serializer)}
{
}


std::string SaveCommand::exec()
{
    m_serializer->visit(Director::getInstance().getDocument());
    auto result = m_serializer->stealResult();
    std::cout << "file contents will be:\n" << result.str() << std::endl;

    return "Document saved succesfully!!!";
}
