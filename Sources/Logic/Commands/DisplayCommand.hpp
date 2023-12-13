#ifndef DISPLAY_COMMAND_HPP
#define DISPLAY_COMMAND_HPP

#include "Command.hpp"

class DisplayCommand : public Command
{
public:
    DisplayCommand();
    std::string exec() override;
    void setItemType(std::string itemName);

};


#endif //DISPLAY_COMMAND_HPP