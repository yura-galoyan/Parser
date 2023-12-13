#ifndef DRAW_COMMAND_HPP
#define DRAW_COMMAND_HPP

#include "../../View/Renderer/Renderer.hpp"
#include "Command.hpp"

class DrawCommand : public Command
{
public:
    DrawCommand( int id, std::string filePath);
    std::string exec() override;
    void setItemType(std::string itemName);

private:
    int m_id;
    std::string m_filePath;
};


#endif //DRAW_COMMAND_HPP
