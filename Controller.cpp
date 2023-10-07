#include "Controller.hpp"

#include "InputOutputSystem.hpp"

#include "Command.hpp"
#include "Rect.hpp"

#include <thread>
#include <fstream>

///DELETE:ME:
using namespace std::chrono_literals;

using IOS = InputOutputSystem;



void Controller::run(){
    ///DELETE:ME:
    std::fstream file{"../input.txt"};
    while(true){
        IOS::output(std::cout, "Enter Command: ");
        auto input  = IOS::getInput(file);
                    //= std::string{"add -name rect -x1 5 -y1 10 -x2 15 -y2 20\n"}
        auto tokenArray = m_tokenizer.split(input);
        IOS::output(std::cout, input, "\n");
        ///FIXME:
        bool isSyntaxApproved = m_parser.parse(tokenArray);

        if(isSyntaxApproved) { 
            std::cout << "syntax is fine" << std::endl; 
            bool isSemanticsApproved = m_semanticAnalyzer.check(tokenArray);
            if(isSemanticsApproved){
                auto command = m_commandCreator.createCommand(tokenArray);
                auto log = command->exec(m_itemList);
                ///DELETE:ME:
                std::cout << "Rectangle's properties are: " << *static_cast<Rect*>(m_itemList[0].get());
                std::this_thread::sleep_for(500ms);
                IOS::output(std::cout, log, "\n");
            }
            else{
                std::cout << "undefined identifier" << std::endl;
                break;
            }
        }
        else{
            std::cout << "input is wrong" << std::endl;
            break;
        }
   }
   file.close();
}



