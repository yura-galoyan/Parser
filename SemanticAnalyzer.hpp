#ifndef SEMANTIC_ANALYZER_HPP
#define SEMANTIC_ANALYZER_HPP

#include "Tokenizer.hpp"

class SemanticAnalyzer
{
public:
    bool check(const Tokenizer::Tokens& tokens) const ;
};



#endif //SEMANTIC_ANALYZER_HPP