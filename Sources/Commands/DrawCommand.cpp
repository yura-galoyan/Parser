#include <QImage>

#include "DrawCommand.hpp"

DrawCommand::DrawCommand(std::shared_ptr<Document>& doc, int id, std::string filePath) : m_doc{doc}, m_id{id}, m_filePath{filePath}
{
}

std::string DrawCommand::exec()
{
    const auto& slide = m_doc->getSlide(m_id);
    QImage image(QSize{1080,1080}, QImage::Format::Format_ARGB32_Premultiplied);
    m_renderer.draw(slide,image);
    image.save(m_filePath.c_str());

    return "Item is drawn and its path is: " + m_filePath;
}

void DrawCommand::setItemType(std::string itemName)
{
}

