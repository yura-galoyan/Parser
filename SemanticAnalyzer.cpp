#include "SemanticAnalyzer.hpp"

#include <iostream>

SemanticAnalyzer::SemanticAnalyzer(){
    
}

bool SemanticAnalyzer::check(const Tokenizer::Tokens &tokens) const {
    std::cout << "started checking..." << std::endl;
    if(tokens.empty()){ return false;}
    

    if(tokens[0] == "add"){
        if(tokens[1] == "-name"){
            if(tokens[2] == "rect"){
                if(tokens.size() == 11){
                    if(tokens[3] == "-x1" &&
                       tokens[5] == "-y1" && 
                       tokens[7] == "-x2" && 
                       tokens[9] == "-y2") {
                        return true;
                    }
                }
            }
            else if(tokens[2] == "circle"){
                if(tokens.size() == 9){
                    if(tokens[3] == "-x" &&
                       tokens[5] == "-y" && 
                       tokens[7] == "-r" ) {
                        return true;
                    }
                }
            }
        }
    }
    else if(tokens[0] == "display"){
        if(tokens.size() == 1){
            return true;
        }
        else if(tokens.size() == 3){
            if(tokens[1] == "-id"){
                return true;
            }
        }
    }
    else if(tokens[0] == "remove"){
        if(tokens.size() == 3){
            if(tokens[1] == "-id"){
                return true;
            }
        }
    }


    

    std::cout << "ended checking..." << std::endl;
    return false;
}