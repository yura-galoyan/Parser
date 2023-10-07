#include "Controller.hpp"

#include "InputOutputSystem.hpp"
#include "Command.hpp"
#include "Rect.hpp"

#include <thread>

using namespace std::chrono_literals;

using IOS = InputOutputSystem;

void Controller::run(){
    while(true){
        IOS::output("Enter Command: ");
        auto input = std::string{"add -name rect -x1 5 -y1 10 -x2 15 -y2 20\n"} /*IOS::getInput(std::cin)*/;
        auto tokenArray = m_tokenizer.split(input);
        
        ///FIXME:
        auto smt = m_parser.parse(tokenArray);

        auto command = m_commandCreator.createCommand(smt);

        

        auto log = command->exec(m_itemList);

        ///DELETE:ME:
        std::cout << *static_cast<Rect*>(m_itemList[0].get());
        std::this_thread::sleep_for(1s);


        IOS::output(log, "\n");
        

   }
}



