#include "Parser.hpp"

#include <iostream>

std::vector<std::string> Parser::parseCommand(std::stringstream&& input){
    std::vector<std::string> tokens;
    std::string tmp;
    while(input >> tmp){
        tokens.push_back(tmp);
    }
    return tokens;
}