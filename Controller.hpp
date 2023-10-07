#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <vector>

#include "SemanticAnalyzer.hpp"
#include "CommandCreator.hpp"
#include "CommandParser.hpp"
#include "Tokenizer.hpp"
#include "Item.hpp"

class Controller
{
public:
    void run();
    


private:
    std::vector<std::unique_ptr<Item>> m_itemList;
    SemanticAnalyzer m_semanticAnalyzer;
    CommandCreator m_commandCreator;
    CommandParser m_parser;
    Tokenizer m_tokenizer;

};


#endif //CONTROLLER_HPP