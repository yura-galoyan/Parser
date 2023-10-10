#ifndef INTERPRETER_HPP
#define INTERPRETER_HPP

#include "CommandRegistry.hpp"
#include "Tokenizer.hpp"
#include "Command.hpp"

class CommandCreator
{
public:
    CommandCreator();
    std::unique_ptr<Command> createCommand(const Tokenizer::Tokens& tokens);

private:
    CommandRegistry m_registry;
};


#endif //INTERPRETER_HPP