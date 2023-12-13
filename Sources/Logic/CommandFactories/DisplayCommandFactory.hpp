#ifndef DISPLAY_COMMAND_FACTORY_HPP
#define DISPLAY_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// @brief TODO:
class Document;
class Slide;

class DisplayCommandFactory : public CommandFactory
{
public:
    DisplayCommandFactory(std::shared_ptr<Slide> slide = nullptr){ };
    std::unique_ptr<Command> createCommand(const std::string& input) override;

};


#endif //DISPLAY_COMMAND_FACTORY_HPP