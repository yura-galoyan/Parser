#include "Circle.hpp"

Circle::Circle( double x, double y, double radius)
{
    attributes()["radius"] = std::to_string(radius);
    attributes()["x"] = std::to_string(x);
    attributes()["y"] = std::to_string(y);
}