#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP

#include "Tokenizer.hpp"



class CommandParser
{
public:
    std::string parse(const std::string& string);

private:
    Tokenizer Tokenizer;
};

#endif //COMMAND_PARSER_HPP