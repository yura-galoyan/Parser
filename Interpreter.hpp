#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include "Tokenizer.hpp"
#include "Command.hpp"

class Interpreter
{
public:
    std::unique_ptr<Command> createCommand(const Tokenizer::Tokens& tokens);

};


#endif //INTERPRETER_HPP