#ifndef SUB_COMMAND_HPP
#define SUB_COMMAND_HPP

#include "Command.hpp"


class SubCommand : public Command
{
public:
    double execute() override ;
    std::unique_ptr<Command> clone() const override;
};


#endif //SUB_COMMAND_HPP