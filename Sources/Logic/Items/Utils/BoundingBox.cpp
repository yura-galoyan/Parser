#include "BoundingBox.hpp"

BoundingBox::BoundingBox(Point p1, Point p2)
    : m_topLeft{p1}, m_bottomRight{p2}
{
}

QRectF BoundingBox::getDrawableRect()
{
    return QRectF{m_topLeft, m_bottomRight};
}
