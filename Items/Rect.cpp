#include "Rect.hpp"
#include "../Serializer/iSerializer.hpp"

Rect::Rect(Point topLeft, Point bottomRight)
    :m_TopLeft{topLeft}, m_BottomRight{bottomRight}
{
    m_type = Item::Type::Rect;
}

void Rect::accept(iSerializer &visitor)
{
    visitor.visit(m_type);
    visitor.visit(m_TopLeft);
    visitor.visit(m_BottomRight);
}
