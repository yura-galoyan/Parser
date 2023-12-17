#include "ChangeSlideCommand.hpp"

#include "../../Director/Director.hpp"

ChangeSlideCommand::ChangeSlideCommand(std::size_t id)
    : m_id{id}
{

}

std::string ChangeSlideCommand::exec()
{
    auto& pDocRef = Director::getInstance().getDocument();
    pDocRef.changeSlide(m_id);
    Director::getInstance().onDocumentChanged();
    return std::string{"slide changed to: "} + std::to_string(m_id);
}
