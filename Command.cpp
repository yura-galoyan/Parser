#include "Command.hpp"

void Command::fillCommand(const Tokenizer::Tokens &tokens){
    for(int i = 1; i < tokens.size(); ++i){
        if(m_options.count(tokens[i])){
            m_arguments.insert(tokens[i],tokens[i + 1]); 
        }
        else{
            throw std::runtime_error{"invalid option"};
        }
    }
    if(!isValid()){
        throw std::runtime_error{"to many options"};
    }
}