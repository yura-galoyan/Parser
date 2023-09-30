#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "CommandParser.hpp"
#include "Tokenizer.hpp"
class Controller
{
public:
    void run();

private:
    void fillCommand(Command& command, const Tokenizer::Tokens& tokens);

private:
    CommandParser parser;
    Tokenizer tokenizer;
};


#endif //CONTROLLER_HPP