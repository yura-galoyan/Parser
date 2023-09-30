#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class AddCommand : public Command
{
public:
    AddCommand();
    std::string exec() override;
    bool isValid() const override;
    std::unique_ptr<Command> clone() const override ;

private:
    int m_argumentCount;
};


#endif //ADD_COMMAND_HPP