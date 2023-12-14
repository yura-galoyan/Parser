#include "Rect.hpp"
#include "../Serializer/iSerializer.hpp"

Rect::Rect(Point topLeft, Point bottomRight)
{
    boundingBox() = BoundingBox{topLeft, bottomRight};
    m_type = Item::Type::Rect;
}

void Rect::accept(iSerializer &visitor)
{
    visitor.visit(m_type);
    Item::accept(visitor);
    visitor.visit(boundingBox().m_topLeft);
    visitor.visit(boundingBox().m_bottomRight);
}
