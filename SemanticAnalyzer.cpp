#include "SemanticAnalyzer.hpp"

#include <iostream>

SemanticAnalyzer::SemanticAnalyzer(){
    
}

bool SemanticAnalyzer::check(const Tokenizer::Tokens &tokens) const {
    auto command = m_registry.findCommand(tokens[0]);
    std::cout << "started checking..." << std::endl;
    if(command->hasOption(tokens[1])){ 
        for(int i = 2; i < tokens.size(); i+=2){
            if(!command->hasOption(tokens[i])){
                return false;
            }
            else {
                std::cout << tokens[i] << " is valid" << std::endl;
            }
        }
    }
    std::cout << "ended checking..." << std::endl;
    return true;
}