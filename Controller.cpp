#include "Controller.hpp"

#include <iostream>

Controller::Controller(std::unique_ptr<AbstractInputOutput> ioPtr_)
    :ioPtr(std::move(ioPtr_)){

}

void Controller::run(){
    while(true){
        ioPtr->output("Enter Command");
        auto input = ioPtr->getInput();
        auto tokens = parser.parseCommand(std::stringstream{input});
        auto command = CommandRegistry.getCommand(tokens[0]);
        fillCommand(*command, std::move(tokens));
        auto result = command->execute();
        ioPtr->output(std::to_string(result));
    }
}

void Controller::fillCommand(Command& command, std::vector<std::string>&& tokens){
    try{
        for( auto first = ++(tokens.begin()); first != tokens.end(); ++first){
            command.addOperand({*first, std::stod(*(++first))});
        }
    }
    catch(...){
        std::cerr << "Syntax error" << std::endl;
    }
            
}
