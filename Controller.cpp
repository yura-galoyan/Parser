#include "InputOutputSystem.hpp"
#include "Controller.hpp"
#include "Command.hpp"
#include "Rect.hpp"

#include <fstream>

using IOS = InputOutputSystem;

void Controller::run(){
    ///DELETE:ME:
    std::fstream file{"../input.txt"};
    while(true){
        IOS::output(std::cout, "Enter Command: ");
        auto input  = IOS::getInput(file);
        auto tokenArray = m_tokenizer.split(input);
        bool isSyntaxApproved = m_parser.parse(tokenArray);
                std::cout << "-----------------------" <<std::endl;
                std::cout << "input is: " << input << std::endl;
                std::cout << "-----------------------" <<std::endl;
        if(isSyntaxApproved) { 
            bool isSemanticsApproved = m_semanticAnalyzer.check(tokenArray);
            if(isSemanticsApproved){
                auto command = m_commandCreator.createCommand(tokenArray);
                auto log = command->exec(m_itemList);
                IOS::output(std::cout, log, "\n");
            }
        }
        int a;
        std::cin >> a;
   }
   file.close();
}



