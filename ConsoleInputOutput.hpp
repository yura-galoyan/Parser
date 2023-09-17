#ifndef CONSOLE_INPUT_OUTPUT_HPP
#define CONSOLE_INPUT_OUTPUT_HPP

#include "AbstractInputOutput.hpp"
#include <string_view>
#include <string>

class ConsoleInputOutput : public AbstractInputOutput
{
public:
    std::string getInput() const override;
    void output(const std::string_view& out) const override;
};


#endif //CONSOLE_INPUT_OUTPUT_HPP