#include "AddSlideCommand.hpp"

#include "../../Director/Director.hpp"

AddSlideCommand::AddSlideCommand()
{
}

std::string AddSlideCommand::exec()
{
    auto& pDocRef = Director::getInstance().getDocument();
    pDocRef.addSlide(Slide{});
    return "slide added";
}
