#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <memory>
#include <vector>


class Command{
public:
    virtual std::string exec(std::vector<std::unique_ptr<Item>>& itemList ) = 0;
    virtual std::unique_ptr<Command> clone() const = 0;
    virtual bool isValid() const = 0;
    
protected:
    std::unordered_set<std::string> m_options;
    std::unordered_map<std::string, double> m_arguments;
};

#endif //COMMAND_HPP