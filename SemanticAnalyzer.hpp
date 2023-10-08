#ifndef SEMANTIC_ANALYZER_HPP
#define SEMANTIC_ANALYZER_HPP

#include "Tokenizer.hpp"

#include <vector>
#include <unordered_map>
#include <string>
class SemanticAnalyzer
{   
    using TrMatrix = std::vector<std::unordered_map<std::string,int>>;
public:
    SemanticAnalyzer();
    bool check(const Tokenizer::Tokens& tokens) const ;

private:
    TrMatrix m_trMatrix;
};



#endif //SEMANTIC_ANALYZER_HPP