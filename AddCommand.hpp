#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class AddCommand : public Command
{
public:
    AddCommand();
    std::string exec(std::vector<std::unique_ptr<Item>>& itemList) override;
    void addArgument(std::string key, double value);
    void setItemType(std::string itemName);
    bool isValid() const override;
    std::unique_ptr<Command> clone() const override ;
private:
    int m_argumentCount;
    std::string m_itemName;
};


#endif //ADD_COMMAND_HPP