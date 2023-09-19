#ifndef XOR_COMMAND_HPP
#define XOR_COMMAND_HPP

#include "Command.hpp"

class XorCommand : public Command
{
public:
    double execute() override ;
    std::unique_ptr<Command> clone() const override;
};


#endif //XOR_COMMAND_HPP