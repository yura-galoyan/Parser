#ifndef DISPLAY_COMMAND_HPP
#define DISPLAY_COMMAND_HPP

#include "Command.hpp"

class DisplayCommand : public Command
{
public:
    DisplayCommand();
    std::string exec(std::vector<std::unique_ptr<Item>>& itemList) override;
    void setItemType(std::string itemName);
    std::unique_ptr<Command> clone() const override ;
    bool hasOption(std::string) override ;

};


#endif //DISPLAY_COMMAND_HPP