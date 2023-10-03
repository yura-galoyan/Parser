#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <vector>

#include "CommandParser.hpp"
#include "Tokenizer.hpp"
#include "Interpreter.hpp"
#include "Item.hpp"
class Controller
{
public:
    void run();

private:
    std::vector<std::unique_ptr<Item>> itemList;
    CommandParser m_parser;
    Interpreter m_interpreter;
    Tokenizer m_tokenizer;
};


#endif //CONTROLLER_HPP