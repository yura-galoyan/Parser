#include "Rect.hpp"
#include "../Serializer/iSerializer.hpp"

Rect::Rect(Point topLeft, Point bottomRight)
    :m_TopLeft{topLeft}, m_BottomRight{bottomRight}
{
}

void Rect::accept(iSerializer &visitor)
{
    visitor.visit(name);
    visitor.visit(m_TopLeft);
    visitor.visit(m_BottomRight);
}
