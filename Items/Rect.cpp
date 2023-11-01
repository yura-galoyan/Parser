#include "Rect.hpp"

Rect::Rect(Point topLeft, Point bottomRight) : 
    m_BottomRight{bottomRight}, m_TopLeft{topLeft}
{
}

std::unique_ptr<Item> Rect::clone() const
{
    return std::make_unique<Rect>(*this);
}
