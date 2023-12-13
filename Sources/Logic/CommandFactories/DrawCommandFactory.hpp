#ifndef DRAW_COMMAND_FACTORY_HPP
#define DRAW_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

/// @brief TODO:
class Document;
class Slide;

class DrawCommandFactory : public CommandFactory
{
public:
    DrawCommandFactory([[maybe_unused]]std::shared_ptr<Slide> slide = nullptr) { };
    std::unique_ptr<Command> createCommand(const std::string& input) override;

};


#endif //DRAW_COMMAND_FACTORY_HPP