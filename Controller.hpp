#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "AbstractInputOutput.hpp"
#include "CommandRegistry.hpp"
#include "Parser.hpp"

class Controller
{
public:
    Controller(std::unique_ptr<AbstractInputOutput> ioPtr);
    void run();



private:
    std::unique_ptr<AbstractInputOutput> ioPtr;
    CommandRegistry CommandRegistry;
    Parser parser;
};



#endif //CONTROLLER_HPP