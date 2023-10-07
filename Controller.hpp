#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <vector>

#include "CommandParser.hpp"
#include "Tokenizer.hpp"
#include "CommandCreator.hpp"
#include "Item.hpp"
class Controller
{
public:
    void run();

private:
    std::vector<std::unique_ptr<Item>> m_itemList;
    CommandCreator m_commandCreator;
    CommandParser m_parser;
    Tokenizer m_tokenizer;
};


#endif //CONTROLLER_HPP