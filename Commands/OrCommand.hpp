#ifndef OR_COMMAND_HPP
#define OR_COMMAND_HPP

#include "Command.hpp"

class OrCommand : public Command
{
public:
    double execute( ) override;
    std::unique_ptr<Command> clone() const override;

};


#endif //OR_COMMAND_HPP