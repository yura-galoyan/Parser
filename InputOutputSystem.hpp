#ifndef INPUT_OUTPUT_SYSTEM_HPP
#define INPUT_OUTPUT_SYSTEM_HPP

#include <iostream>
#include <string>

class InputOutputSystem
{
public:
    static std::string getInput(std::istream& in = std::cin);
    template<typename...Args>
    static void output(Args... args);
};


#endif //INPUT_OUTPUT_SYSTEM_HPP

template <typename... Args>
inline void InputOutputSystem::output(Args... args){
    ((std::cout << args),...);
}
