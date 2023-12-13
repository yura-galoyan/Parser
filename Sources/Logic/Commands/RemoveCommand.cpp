#include "RemoveCommand.hpp"
#include "../../Director/Director.hpp"

RemoveCommand::RemoveCommand()
{
}

std::string RemoveCommand::exec()
{
    Director::getInstance().getDocument().getCurrSlide().removeItem(m_id);
    return "item is removed";
}
