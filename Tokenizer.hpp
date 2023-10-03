#ifndef TOKENIZER_HPP
#define TOKENIZER_HPP

#include <string>
#include <vector>
#include <sstream>

class Tokenizer
{
public:
    using Token = std::string;
    using Tokens = std::vector<Token>;
    
public:
    Tokens split(std::string input);
};



#endif //TOKENIZER_HPP