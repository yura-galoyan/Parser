#ifndef COMMAND_PARSER_HPP
#define COMMAND_PARSER_HPP

#include "Tokenizer.hpp"



class CommandParser
{
public:
    bool parse(const Tokenizer::Tokens& tokens);
};

#endif //COMMAND_PARSER_HPP