#include "InputOutputSystem.hpp"

std::string InputOutputSystem::getInput(std::istream& in){
    std::string tmp;
    std::getline(in,tmp);
    return tmp;
}