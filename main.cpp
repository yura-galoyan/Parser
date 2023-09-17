#include "Controller.hpp"
#include "ConsoleInputOutput.hpp"

int main(){
    Controller controller{std::make_unique<ConsoleInputOutput>()};
    controller.run();
}