#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Item.hpp"

#include <ostream>

class Circle : public Item
{
public:
    Circle(Point center, double radius);
    void accept(iSerializer& visitor) override;

    // [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Circle& rect) {
    //     out << "Center: " << rect.m_center.x << " " << rect.m_center.y 
    //         << " | Radius:  " << rect.m_radius;
    //     return out;
    // }
    
private:
    std::string name{"Circle"};
    Point m_center;
    double m_radius;

};




#endif //CIRCLE_HPP