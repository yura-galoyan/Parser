#include "../Serializer/iSerializer.hpp"
#include "Circle.hpp"
Circle::Circle(Point center, double radius)
{
    attributes()["radius"] = radius;
    attributes()["center"] = center;
}

void Circle::accept(iSerializer &visitor) const
{
    
}
