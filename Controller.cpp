#include "Controller.hpp"
#include <iomanip>
using IOS = InputOutputSystem;

Controller::Controller(std::shared_ptr<Document> doc) : m_doc(doc), m_CommandFactoryRegistry(doc)
{
}

void Controller::run()
{
    std::stringstream s
    (R"(add -type rect -x1 1 -y1 2 -x2 3 -y2 4
    display
    addslide
    display)");

    int i = 5;
    while(--i){
        std::string input = IOS::getInput(s); //"add -type rect -x1 1 -y1 2 -x2 3 -y2 4";

        auto commandName = m_parser.parse(input);
        auto command = m_CommandFactoryRegistry[commandName]->createCommand(input);
        IOS::output(std::cout, command->exec(), "\n");
    }
}
