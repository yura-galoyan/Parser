#include "CommandParser.hpp"

#include <iostream>
#include <regex>

std::string CommandParser::parse(const std::string& input){
    auto tokens = Tokenizer.split(input);
    return tokens[0];
}