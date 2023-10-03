#include "Tokenizer.hpp"

Tokenizer::Tokens Tokenizer::split(std::string input){
    Tokens tokens;
    Token tmp;
    std::istringstream in(input);
    while(in >> tmp){
        tokens.push_back(tmp);
    }
    return tokens;
}