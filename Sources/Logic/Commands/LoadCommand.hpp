#ifndef LOAD_COMMAND_HPP
#define LOAD_COMMAND_HPP


#include "../../Director/Director.hpp"
#include "Command.hpp"

class LoadCommand : public Command
{
public:
    LoadCommand( std::unique_ptr<iSerializer> serializer, std::stringstream input);
    std::string exec() override ;

private:
    std::unique_ptr<iSerializer> m_serializer;
    std::stringstream m_input;

};



#endif //LOAD_COMMAND_HPP
