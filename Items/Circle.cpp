#include "../Serializer/iSerializer.hpp"
#include "Circle.hpp"
Circle::Circle(Point center, double radius)
    :m_center(center), m_radius(radius)
{

}

void Circle::accept(iSerializer &visitor)
{
    visitor.visit(name);
    visitor.visit(m_center);
    visitor.visit(m_radius);
}
