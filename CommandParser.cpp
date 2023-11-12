#include "CommandParser.hpp"

#include <iostream>
#include <regex>

std::string CommandParser::parse(const std::string& input){
    auto token = Tokenizer.getToken(input,1);
    return token;
}