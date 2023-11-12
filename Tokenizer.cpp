#include "Tokenizer.hpp"

Tokenizer::Tokens Tokenizer::split(std::string input) const {
    Tokens tokens;
    Token tmp;
    std::istringstream in(input);
    while(in >> tmp){
        tokens.push_back(tmp);
    }
    return tokens;
}

std::string Tokenizer::getToken(std::string input, std::size_t n) const
{
    Token tmp;
    std::istringstream in(input);
    while( n > 0 && in >> tmp ){
        --n;
    }
    if(n == 0) { return tmp; }
    return "error";
}
