#include "../Serializer/TxtSerializer.hpp"
#include "../Commands/SaveCommand.hpp"
#include "SaveCommandFactory.hpp"



std::unique_ptr<Command> SaveCommandFactory::createCommand(const std::string &input)
{
    auto cmd = std::make_unique<SaveCommand>(std::make_unique<TxtSerializer>());
    return std::move(cmd);
}