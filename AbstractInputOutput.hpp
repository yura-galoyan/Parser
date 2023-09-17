#ifndef ABSTRACT_INPUT_OUTPUT_HPP
#define ABSTRACT_INPUT_OUTPUT_HPP

#include <string_view>
#include <string>

class AbstractInputOutput
{
public:
    virtual std::string getInput() const = 0;
    virtual void output(const std::string_view& out) const = 0;
};


#endif //ABSTRACT_INPUT_OUTPUT_HPP