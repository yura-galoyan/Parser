#ifndef FACTORY_HPP
#define FACTORY_HPP

#include "../Commands/Command.hpp"
#include "../Tokenizer.hpp"
#include <memory>

class CommandFactory
{
public:
    virtual std::unique_ptr<Command> createCommand(const std::string& input)  = 0;


protected:
    /// @brief TODO:
    Tokenizer tokenizer;

};


#endif //FACTORY_HPP