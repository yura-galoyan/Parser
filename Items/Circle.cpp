#include "../Serializer/iSerializer.hpp"
#include "Circle.hpp"
Circle::Circle(Point center, double radius)
    :m_center(center), m_radius(radius)
{
    m_type = Item::Type::Circle;
}

void Circle::accept(iSerializer &visitor)
{
    visitor.visit(m_type);
    visitor.visit(m_center);
    visitor.visit(m_radius);
}
