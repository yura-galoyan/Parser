#ifndef REMOVE_COMMAND_HPP
#define REMOVE_COMMAND_HPP

#include "Command.hpp"

class RemoveCommand : public Command
{
public:
    RemoveCommand();
    std::string exec() override ;
    void setId(std::string id) { m_id = std::stoi(id); };

private:
    int m_id;

};


#endif //REMOVE_COMMAND_HPP