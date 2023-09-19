#ifndef PARSER_HPP
#define PARSER_HPP

#include <iterator>
#include <sstream>
#include <string>
#include <vector>

class Parser
{
public:
    std::vector<std::string> parseCommand(std::stringstream&& input);
    
};



#endif //PARSER_HPP