#ifndef QUIT_COMMAND_HPP
#define QUIT_COMMAND_HPP

#include "Command.hpp"

class QuitCommand : public Command
{
public:
    double execute() override;
    std::unique_ptr<Command> clone() const override;
};


#endif //QUIT_COMMAND_HPP