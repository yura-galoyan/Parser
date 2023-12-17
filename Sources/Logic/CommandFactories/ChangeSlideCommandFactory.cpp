#include "ChangeSlideCommandFactory.hpp"
#include "../Commands/ChangeSlideCommand.hpp"

// change slide -id id
std::unique_ptr<Command> ChangeSlideCommandFactory::createCommand(const std::string &input) 
{
    Tokenizer tokenizer;
    auto tokens = tokenizer.split(input);
    std::size_t id = std::stod(tokens[3]);
    auto cmd = std::make_unique<ChangeSlideCommand>(id);
    return cmd;
}