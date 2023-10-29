#include "RemoveCommandFactory.hpp"

#include "../Commands/RemoveCommand.hpp"

/// remove -id 1
std::unique_ptr<Command> RemoveCommandFactory::createCommand(const std::string &input)
{
    auto tokens = Tokenizer{}.split(input);
    auto cmd = std::make_unique<RemoveCommand>(m_doc);
    cmd->setId(tokens[2]);
    return std::move(cmd);
}