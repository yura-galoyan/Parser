#ifndef ADD_COMMAND_HPP
#define ADD_COMMAND_HPP

#include "Command.hpp"

class AddCommand : public Command
{
public:
    AddCommand();
    std::string exec(std::vector<std::unique_ptr<Item>>& itemList) override;
    void setItemType(std::string itemName);
    std::unique_ptr<Command> clone() const override ;
    bool hasOption(std::string) override ;

private:
    int m_argumentCount;
    std::string m_itemName;


    std::unordered_map<std::string,std::unordered_set<std::string>> options;

//    "Rect" -> " -x1 -y1 -x2 -y2"
//    "Circle" -> "-r -x -y"


};


#endif //ADD_COMMAND_HPP