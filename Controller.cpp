#include "Controller.hpp"

using IOS = InputOutputSystem;

Controller::Controller(std::shared_ptr<Document> doc) : m_doc(doc), m_CommandFactoryRegistry(doc)
{
}

void Controller::run()
{
    while(true){
        // auto input = IOS::getInput(std::cin);/// get input
        std::string input = "add -type rect -x1 1 -y1 2 -x2 3 -y2 4";
        auto commandName = m_parser.parse(input);
        auto command = m_CommandFactoryRegistry[commandName]->createCommand(input);
        command->exec(/*  */);
    }
}
