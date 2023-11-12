#include "../Serializer/TxtDeserializer.hpp"
#include "../Commands/LoadCommand.hpp"
#include "LoadCommandFactory.hpp"

#include <sstream>

std::unique_ptr<Command> LoadCommandFactory::createCommand(const std::string &input)
{
    /// TODO:
    //  take path from input

    std::stringstream stream(R"(document
slide
rect 1 2 3 4
circle 1 2 5)");


    auto cmd = std::make_unique<LoadCommand>(m_doc,std::make_unique<TxtDeserializer>(), std::move(stream) );

    return std::move(cmd);
}