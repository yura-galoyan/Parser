
#include "CommandCreator.hpp"

#include "AddCommand.hpp"

CommandCreator::CommandCreator()
{

}

std::unique_ptr<Command> CommandCreator::createCommand(const Tokenizer::Tokens &tokens)
{
    std::unique_ptr<Command> cmd = m_registry.findCommand(tokens[0]);

    if(tokens[0] == "add"){
        static_cast<AddCommand*>(cmd.get())->setItemType(tokens[2]);
        for(int i = 3; i < tokens.size(); i+=2){
            cmd->addArgument(tokens[i], std::stod(tokens[i + 1]));
        }
        return cmd;
    }
    if(tokens[0] == "display"){
        cmd->addArgument(tokens[1],std::stod(tokens[1 + 1]));
        return cmd;
    }

    return std::unique_ptr<Command>{};
}