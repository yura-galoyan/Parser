#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <unordered_set>
#include <vector>
#include <string>
#include <memory>

class Command
{
public:
    Command();
    virtual double execute() = 0;
    virtual ~Command() { };
    virtual std::unique_ptr<Command> clone() const = 0;
    void addOperand(std::pair<std::string, double> operandsPair);

protected:
    std::vector<std::pair<std::string, double> > operands;
    std::unordered_set<std::string> options;

};

#endif //COMMAND_HPP
