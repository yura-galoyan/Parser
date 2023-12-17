#include "Text.hpp"
#include "../Serializer/iSerializer.hpp"

Text::Text(Point topLeft, Point bottomRight, std::string textContent)
{
    boundingBox() = BoundingBox{topLeft, bottomRight};
    m_text = textContent;
    auto letterCount = m_text.size();
    
    m_type = Item::Type::Text;
}

void Text::accept(iSerializer &visitor)
{
    visitor.visit(m_type);
    Item::accept(visitor);
    visitor.visit(boundingBox().m_topLeft);
    visitor.visit(boundingBox().m_bottomRight);
    visitor.visit(m_text);
}
