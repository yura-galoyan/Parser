#ifndef MOD_COMMAND_HPP
#define MOD_COMMAND_HPP

#include "Command.hpp"


class ModCommand : public Command
{
public:
    double execute() override;
    virtual std::unique_ptr<Command> clone() const override;

};


#endif //MOD_COMMAND_HPP