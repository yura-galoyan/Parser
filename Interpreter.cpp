#include "Interpreter.hpp"

#include "AddCommand.hpp"

std::unique_ptr<Command> Interpreter::createCommand(const Tokenizer::Tokens& tokens){
    if(tokens[0] == "add"){
        std::unique_ptr<AddCommand> cmd;
        if(tokens[2] == "rect"){
            cmd->setItemType("rect");
            cmd->addArgument("-x1", std::stod(tokens[3]));
            cmd->addArgument("-y1", std::stod(tokens[5]));
            cmd->addArgument("-x2", std::stod(tokens[7]));
            cmd->addArgument("-y2", std::stod(tokens[9]));
        }
        return cmd;
    }



}