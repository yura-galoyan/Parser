#ifndef AND_COMMAND_HPP
#define AND_COMMAND_HPP

#include "Command.hpp"

class AndCommand : public Command
{
public:
    AndCommand();
    double execute() override ;
    virtual std::unique_ptr<Command> clone() const override;

};


#endif //AND_COMMAND_HPP