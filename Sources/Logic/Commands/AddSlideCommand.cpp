#include "AddSlideCommand.hpp"

#include "../../Director/Director.hpp"

AddSlideCommand::AddSlideCommand()
{
}

std::string AddSlideCommand::exec()
{
    auto& pDocRef = Director::getInstance().getDocument();
    pDocRef.addSlide(Slide{});
    Director::getInstance().onDocumentChanged();
    return "slide added";
}
