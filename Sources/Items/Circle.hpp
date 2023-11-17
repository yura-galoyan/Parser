#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Item.hpp"

#include <ostream>

class Circle : public Item
{
public:
    Circle() {
        m_type = Item::Type::Circle;
    };
    Circle(Point center, double radius);
    void accept(iSerializer& visitor) override;

    // [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Circle& rect) {
    //     out << "Center: " << rect.m_center.x << " " << rect.m_center.y 
    //         << " | Radius:  " << rect.m_radius;
    //     return out;
    // }
    
    std::unique_ptr<Item> clone() override { return std::make_unique<Circle>(*this); };
private:
    Point m_center;
    double m_radius;

};




#endif //CIRCLE_HPP