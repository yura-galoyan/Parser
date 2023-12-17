#include "../Serializer/TxtDeserializer.hpp"
#include "../Commands/LoadCommand.hpp"
#include "LoadCommandFactory.hpp"

#include <sstream>

std::unique_ptr<Command> LoadCommandFactory::createCommand(const std::string &input)
{
    /// TODO:
    //  take path from input

    std::stringstream stream(R"(document 2
slide 0 5
100 0 100 100 200 200
100 1 250 250 300 300
100 2 350 350 400 400
200 3 250 250 50 50
300 4 450 450 550 500 hello_world
slide 1 2
100 5 250 250 300 300
100 6 350 350 400 400)");


    auto cmd = std::make_unique<LoadCommand>(std::make_unique<TxtDeserializer>(), std::move(stream) );

    return std::move(cmd);
}
