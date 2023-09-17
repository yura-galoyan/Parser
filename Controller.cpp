#include "Controller.hpp"

Controller::Controller(std::unique_ptr<AbstractInputOutput> ioPtr_)
    :ioPtr(std::move(ioPtr_)){

}

void Controller::run(){
    while(true){
        ioPtr->output("Enter Command");
        auto input = ioPtr->getInput();
        auto tokens = parser.parseCommand(input);
        auto command = CommandRegistry.getCommand(tokens[0]);
        

        ioPtr->output(std::to_string(45));
    }
}
