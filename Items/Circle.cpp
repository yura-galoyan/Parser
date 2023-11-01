#include "Circle.hpp"

Circle::Circle(Point center, double radius)
    : m_center{center}, m_radius{radius}
{
}

std::unique_ptr<Item> Circle::clone() const
{
    return std::make_unique<Circle>(*this);
}
