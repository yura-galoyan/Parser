#ifndef MUL_COMMAND_HPP
#define MUL_COMMAND_HPP

#include "Command.hpp"

class MulCommand : public Command
{
public:
    double execute() override;
    std::unique_ptr<Command> clone() const override;
     
};


#endif //MUL_COMMAND_HPP