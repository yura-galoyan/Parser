#include "../Serializer/TxtDeserializer.hpp"
#include "../Commands/LoadCommand.hpp"
#include "LoadCommandFactory.hpp"

#include <sstream>

std::unique_ptr<Command> LoadCommandFactory::createCommand(const std::string &input)
{
    /// TODO:
    //  take path from input

    std::stringstream stream(R"(document 2
slide 0 2
100 0 100 100 200 200
200 1 250 250 50
slide 1 1
100 2 300 400 600 200)");


    auto cmd = std::make_unique<LoadCommand>(m_doc,std::make_unique<TxtDeserializer>(), std::move(stream) );

    return std::move(cmd);
}
