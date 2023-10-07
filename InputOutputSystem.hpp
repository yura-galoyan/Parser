#ifndef INPUT_OUTPUT_SYSTEM_HPP
#define INPUT_OUTPUT_SYSTEM_HPP

#include <iostream>
#include <string>

class InputOutputSystem{
public:
    static std::string getInput(std::istream& in = std::cin);
    template<typename...Args>
    static void output(std::ostream& out, const Args&... args);
};

template <typename... Args>
inline void InputOutputSystem::output(std::ostream& out, const Args &... args){
    ((out<<args), ...);
}

#endif //INPUT_OUTPUT_SYSTEM_HPP
