#include "Controller.hpp"

#include "InputOutputSystem.hpp"
#include "Command.hpp"
using IOS = InputOutputSystem;

void Controller::run(){
    while(true){
        IOS::output("Enter Command: ");
        auto input = IOS::getInput();
        auto command = parser.getCommand(input);
        auto tokens = tokenizer.getTokens(std::istringstream{input});
        command->fillCommand(tokens);
        auto log = command->exec();
        IOS::output(log, "\n");
    }
}

