#ifndef HELP_COMMAND_FACTORY_HPP
#define HELP_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// @brief TODO:
class Document;
class Slide;

class HelpCommandFactory : public CommandFactory
{
public:
    HelpCommandFactory([[maybe_unused]]std::shared_ptr<Slide> slide = nullptr)  { };
    std::unique_ptr<Command> createCommand(const std::string& input) override;

};

#endif //HELP_COMMAND_FACTORY_HPP