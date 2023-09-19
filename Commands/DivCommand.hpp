#ifndef DIV_COMMAND_HPP
#define DIV_COMMAND_HPP

#include "Command.hpp"

class DivCommand : public Command
{
public:
    double execute() override;
    virtual std::unique_ptr<Command> clone() const override;
};


#endif //DIV_COMMAND_HPP