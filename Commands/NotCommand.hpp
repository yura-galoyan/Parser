#ifndef NOT_COMMAND_HPP
#define NOT_COMMAND_HPP

#include "Command.hpp"

class NotCommand : public Command
{
public:
    double execute( ) override;
    std::unique_ptr<Command> clone() const override;
};


#endif //NOT_COMMAND_HPP