#ifndef PARSER_HPP
#define PARSER_HPP

#include <sstream>
#include <string>
#include <vector>

class Parser
{
public:
    std::vector<std::string> parseCommand(const std::string& input);
    
};



#endif //PARSER_HPP