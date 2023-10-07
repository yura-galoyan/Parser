#include "CommandCreator.hpp"

#include "AddCommand.hpp"

std::unique_ptr<Command> CommandCreator::createCommand(const Tokenizer::Tokens& tokens){
    if(tokens[0] == "add"){
        std::unique_ptr<AddCommand> cmd = std::make_unique<AddCommand>();
        if(tokens[2] == "rect"){
            cmd->setItemType("rect");
            cmd->addArgument("-x1", std::stod(tokens[4]));
            cmd->addArgument("-y1", std::stod(tokens[6]));
            cmd->addArgument("-x2", std::stod(tokens[8]));
            cmd->addArgument("-y2", std::stod(tokens[10]));
        }
        return cmd;
    }



    return std::unique_ptr<Command>{};
}