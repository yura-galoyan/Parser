#ifndef CHANGE_SLIDE_COMMAND_FACTORY_HPP
#define CHANGE_SLIDE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"

class Document;
class Slide;

class ChangeSlideCommandFactory : public CommandFactory
{
public:
    ChangeSlideCommandFactory( std::shared_ptr<Slide> slide = nullptr)  { };
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

};

#endif //CHANGE_SLIDE_COMMAND_FACTORY_HPP
