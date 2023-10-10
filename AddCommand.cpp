#include <algorithm>

#include "AddCommand.hpp"
#include "Rect.hpp"

AddCommand::AddCommand(){
    m_options.insert("-name");
    m_argumentCount = 4;
}

std::string AddCommand::exec(std::vector<std::unique_ptr<Item>>& itemList){
    if(m_itemName == "rect"){
        std::unique_ptr<Rect> rect = std::make_unique<Rect>();
        rect->setTopLeft({m_arguments["-x1"], m_arguments["-y1"]});
        rect->setBottomRight({m_arguments["-x2"], m_arguments["-y2"]});
        itemList.push_back(std::move(rect));
    }
    if(m_itemName == "Circle"){
        
    }
    return std::string{"Item was added"};
}


void AddCommand::setItemType(std::string itemName){
    m_itemName = itemName;

    
}


std::unique_ptr<Command> AddCommand::clone() const
{
    return std::make_unique<AddCommand>();
}

bool AddCommand::hasOption(std::string token)
{
    
    
    if(m_options.count(token)){
        return true;
    }

    if( a == 1){
        if(std::find_if(  options.begin(), options.end(), [token](const auto& option_set  ) {
            return option_set.first == token;
        }   ) != options.end()){
            return true;
            m_itemName = token;
            --a;
        }
        return false;
    }
    else{
        if((!options[m_itemName].count(token))){
            return false;
        }
    }

    return true;




}
