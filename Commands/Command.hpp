#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <vector>
#include <string>
#include <memory>

class Command
{
public:
    virtual double execute(std::vector<double>&) = 0;
    virtual ~Command() { };
    virtual std::unique_ptr<Command> clone() const = 0;
    void addOperand(std::pair<std::string, double> operandsPair);

private:
    std::vector<std::pair<std::string, double> > operands;

};

#endif //COMMAND_HPP
