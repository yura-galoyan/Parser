#include "Controller.hpp"

#include "InputOutputSystem.hpp"
#include "Command.hpp"
using IOS = InputOutputSystem;

void Controller::run(){
    while(true){
        IOS::output("Enter Command: ");
        auto input = IOS::getInput(std::cin);
        auto tokenArray = m_tokenizer.split(input);
        ///FIXME:
        auto smt = m_parser.parse(tokenArray); 
        auto command = m_interpreter.createCommand(smt);
        // auto log = command->exec();
        // IOS::output(log, "\n");
    }
}

