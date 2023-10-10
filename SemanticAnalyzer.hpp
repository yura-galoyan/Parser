#ifndef SEMANTIC_ANALYZER_HPP
#define SEMANTIC_ANALYZER_HPP

#include "Tokenizer.hpp"
#include "CommandRegistry.hpp"

class SemanticAnalyzer
{   
public:
    SemanticAnalyzer();
    bool check(const Tokenizer::Tokens& tokens) const ;

private:
    CommandRegistry m_registry;
};



#endif //SEMANTIC_ANALYZER_HPP