#ifndef HELP_COMMAND_HPP
#define HELP_COMMAND_HPP

#include "Command.hpp"

class HelpCommand : public Command
{
public:
   std::string exec() override ;
};

#endif //HELP_COMMAND_HPP