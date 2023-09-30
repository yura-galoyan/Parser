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

std::string AddCommand::exec(){
    Rect rect;
    rect.setTopLeft({m_arguments["-x1"], m_arguments["-y1"]});
    rect.setBottomRight({m_arguments["-x2"], m_arguments["-y2"]});
    // add rect to itemList
    return std::string{"Item was added"};
}

bool AddCommand::isValid() const {
    if(m_arguments.size() != m_argumentCount){
        return false;
    }
    return true;
}
