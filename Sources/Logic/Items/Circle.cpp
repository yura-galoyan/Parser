#include "../Serializer/iSerializer.hpp"
#include "Circle.hpp"
Circle::Circle(Point center, double radius)
{
    boundingBox() = BoundingBox{  
        {center.x - radius, center.y - radius},
        {center.x + radius, center.y + radius}};
    m_type = Item::Type::Circle;
}

Circle::Circle(Point p1, Point p2)
{
    boundingBox() = BoundingBox{p1,p2};
    m_type = Item::Type::Circle;
}

void Circle::accept(iSerializer &visitor)
{
    visitor.visit(m_type);
    Item::accept(visitor);
    visitor.visit(boundingBox().m_topLeft);
    visitor.visit(boundingBox().m_bottomRight);
    visitor.visit(getColor());
}
