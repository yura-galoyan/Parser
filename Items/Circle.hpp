#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Item.hpp"

#include <ostream>

class Circle : public Item
{
public:
    Circle(Point center, double radius);
    virtual void accept(iSerializer& visitor) const;

    // [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Circle& rect) {
    //     out << "Center: " << rect.m_center.x << " " << rect.m_center.y 
    //         << " | Radius:  " << rect.m_radius;
    //     return out;
    // }
};


#endif //CIRCLE_HPP