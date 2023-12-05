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
100 1 2 3 4
200 1 2 5
slide 1 1
100 3 4 6 2)");


    auto cmd = std::make_unique<LoadCommand>(m_doc,std::make_unique<TxtDeserializer>(), std::move(stream) );

    return std::move(cmd);
}
