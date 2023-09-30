#include "Tokenizer.hpp"

Tokenizer::Tokens Tokenizer::getTokens(std::istringstream stream){
    Tokens tokens;
    Token tmp;
    while(stream >> tmp){
        tokens.push_back(tmp);
    }
    return tokens;
}