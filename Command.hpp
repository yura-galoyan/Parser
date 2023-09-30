#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <unordered_set>
#include <unordered_map>
#include "Tokenizer.hpp"

class Command{
public:
    virtual std::string exec() = 0;
    virtual std::unique_ptr<Command> clone() const = 0;
    virtual bool isValid() const = 0;
    void fillCommand(const Tokenizer::Tokens& tokens );
    
protected:
    std::unordered_set<std::string> m_options;
    std::unordered_map<std::string, int> m_arguments;
};

#endif //COMMAND_HPP