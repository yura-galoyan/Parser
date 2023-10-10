#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <memory>
#include "Tokenizer.hpp"
#include "Item.hpp"
class Command{
public:
    virtual std::string exec(std::vector<std::unique_ptr<Item>>& itemList) = 0;
    virtual std::unique_ptr<Command> clone() const = 0;    
    void addArgument(std::string key, double value);
    virtual bool hasOption(std::string) = 0;

protected:
    std::unordered_set<std::string> m_options;
    std::unordered_map<std::string, double> m_arguments;
};

#endif //COMMAND_HPP