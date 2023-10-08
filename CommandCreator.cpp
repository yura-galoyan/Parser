#include "CommandCreator.hpp"

#include "AddCommand.hpp"

std::unique_ptr<Command> CommandCreator::createCommand(const Tokenizer::Tokens& tokens){

    std::unique_ptr<Command> cmd = std::make_unique<AddCommand>();
    if(tokens[0] == "add"){
        if(tokens[2] == "rect"){
            static_cast<AddCommand*>(cmd.get())->setItemType("rect");
            cmd->addArgument("-x1", std::stod(tokens[4]));
            cmd->addArgument("-y1", std::stod(tokens[6]));
            cmd->addArgument("-x2", std::stod(tokens[8]));
            cmd->addArgument("-y2", std::stod(tokens[10]));
        }
        else if(tokens[2] == "circle"){
            static_cast<AddCommand*>(cmd.get())->setItemType("circle");
            cmd->addArgument("-x", std::stod(tokens[4]));
            cmd->addArgument("-y", std::stod(tokens[6]));
            cmd->addArgument("-r", std::stod(tokens[8]));
        }
        return cmd;
    }





    return std::unique_ptr<Command>{};
}