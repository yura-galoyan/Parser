#ifndef CHANGE_SLIDE_COMMAND_HPP
#define CHANGE_SLIDE_COMMAND_HPP

#include "Command.hpp"


class ChangeSlideCommand : public Command
{
public:
    ChangeSlideCommand(std::size_t);
    std::string exec() override;

private:
    std::size_t m_id;

};

#endif // CHANGE_SLIDE_COMMAND_HPP
