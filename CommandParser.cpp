#include "CommandParser.hpp"

#include <iostream>
#include <regex>

bool CommandParser::parse(const Tokenizer::Tokens& tokens){
    bool correct{true};

    if(tokens.size() % 2 == 0) { 
        std::cout <<"wrong token count" <<std::endl;
        return false;
    }

    if(!std::regex_match(tokens[0],std::regex{"[a-zA-Z]+"})){
        std::cout <<"not command " <<std::endl;
        return false;
    }

    for(int i = 1; i < tokens.size(); i +=2){
        if(!std::regex_match(tokens[i],std::regex{"[-][a-zA-Z]+[0-9]*"} )){
            std::cout <<"use \"-option\" style " <<std::endl;
            return false;
        }
        if(!std::regex_match(tokens[i + 1],std::regex{"[a-zA-Z]+" } ) && 
           !std::regex_match(tokens[i + 1], std::regex{"[0-9]+"})     &&
           !std::regex_match(tokens[i + 1], std::regex{"[0-9]+\\.[0-9]+"})){

            return false;
        }
    }
            
    
    
    return true;
}