#ifndef ADDSLIDE_COMMAND_HPP
#define ADDSLIDE_COMMAND_HPP

#include "Command.hpp"


class AddSlideCommand : public Command
{
public:
    AddSlideCommand();
    std::string exec() override;

};

#endif // ADDSLIDE_COMMAND_HPP