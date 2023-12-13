#ifndef ADDSLIDE_COMMAND_FACTORY_HPP
#define ADDSLIDE_COMMAND_FACTORY_HPP

#include "CommandFactory.hpp"


/// FIXME: resolve this 
class Document;
class Slide;

class AddSlideCommandFactory : public CommandFactory
{
public:
    AddSlideCommandFactory( std::shared_ptr<Slide> slide = nullptr)  { };
    std::unique_ptr<Command> createCommand(const std::string& input)  override;

};

#endif //ADDSLIDE_COMMAND_FACTORY_HPP