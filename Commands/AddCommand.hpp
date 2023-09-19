#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

#include <vector>

class AddCommand : public Command
{
public:
    AddCommand();
    double execute() override ;
    std::unique_ptr<Command> clone() const override;
};


#endif //ADD_COMMAND_HPP