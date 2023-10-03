#include "AddCommand.hpp"

#include "Rect.hpp"

AddCommand::AddCommand(){
    m_options.insert("-name");
    m_options.insert("-x1");
    m_options.insert("-y1");
    m_options.insert("-x2");
    m_options.insert("-y2");
    m_argumentCount = 4;
}

std::string AddCommand::exec(std::vector<std::unique_ptr<Item>>& itemList){
    if(m_itemName == "rect"){
        std::unique_ptr<Rect> rect;
        rect->setTopLeft({m_arguments["-x1"], m_arguments["-y1"]});
        rect->setBottomRight({m_arguments["-x2"], m_arguments["-y2"]});
        itemList.push_back(std::move(rect));
    }
    if(m_itemName == "Circle"){
        
    }
    return std::string{"Item was added"};
}

void AddCommand::addArgument(std::string key, double value){
    m_arguments[key] = value;
}

void AddCommand::setItemType(std::string itemName){
    m_itemName = itemName;
}

bool AddCommand::isValid() const {
    if(m_arguments.size() != m_argumentCount){
        return false;
    }
    return true;
}

std::unique_ptr<Command> AddCommand::clone() const
{
    return std::unique_ptr<Command>();
}
