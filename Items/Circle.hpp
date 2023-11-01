#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Item.hpp"

#include <ostream>

class Circle : public Item
{
public:
    Circle(Point center, double radius);

    Point getCenter() { return m_center; }    
    double getRadius() { return m_radius; }
    void setCenter(Point center) { m_center = center; }    
    void setRadius(double radius) { m_radius = radius; }

    [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Circle& rect) {
        out << "Center: " << rect.m_center.x << " " << rect.m_center.y 
            << " | Radius:  " << rect.m_radius;
        return out;
    }

    std::unique_ptr<Item> clone() const override; 

private:
    Point m_center;
    double m_radius;
};


#endif //CIRCLE_HPP