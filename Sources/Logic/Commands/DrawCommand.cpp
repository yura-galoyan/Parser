#include <QImage>

#include "DrawCommand.hpp"
#include "../../Director/Director.hpp"
#include <QDir>
DrawCommand::DrawCommand( int id, std::string filePath) : m_id{id}, m_filePath{filePath}
{
}

std::string DrawCommand::exec()
{
    const auto& slide = Director::getInstance().getDocument().getSlide(m_id);
    
    QImage image(QSize{1080,1080}, QImage::Format::Format_RGB32);
    Renderer render;
    render.draw(slide,image);
    image.save(m_filePath.c_str());
    QDir dir(QString::fromStdString(m_filePath));
    return ("File saved: " + dir.absoluteFilePath(QString::fromStdString(m_filePath))).toStdString();
}

void DrawCommand::setItemType(std::string itemName)
{
}

