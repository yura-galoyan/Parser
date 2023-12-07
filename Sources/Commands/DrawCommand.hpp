#ifndef DRAW_COMMAND_HPP
#define DRAW_COMMAND_HPP

#include "../Items/Document.hpp"
#include "../View/Renderer/Renderer.hpp"
#include "Command.hpp"

class DrawCommand : public Command
{
public:
    DrawCommand(std::shared_ptr<Document>& doc, int id, std::string filePath);
    std::string exec() override;
    void setItemType(std::string itemName);

private:
    int m_id;
    std::string m_filePath;
    std::shared_ptr<Document> m_doc;
    Renderer m_renderer;
};


#endif //DRAW_COMMAND_HPP