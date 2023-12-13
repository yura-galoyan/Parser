#ifndef SAVECOMMAND_HPP
#define SAVECOMMAND_HPP

#include "Command.hpp"


class SaveCommand : public Command
{
public:
    SaveCommand( std::unique_ptr<iSerializer> serializer);
    std::string exec() override ;

private:
    std::unique_ptr<iSerializer> m_serializer;
};


#endif //SAVECOMMAND_HPP