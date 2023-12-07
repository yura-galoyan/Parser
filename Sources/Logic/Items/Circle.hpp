#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "Item.hpp"

#include <ostream>
#include <QAbstractAnimation> 


class Circle : public Item
{
public:
    Circle() {
        m_type = Item::Type::Circle;
    };
    Circle(Point center, double radius);
    void accept(iSerializer& visitor) override;
    auto getDrawableInfo() { return std::make_pair(m_center, m_radius); }
    std::unique_ptr<Item> clone() override { return std::make_unique<Circle>(*this); };

private:
    Point m_center;
    double m_radius;

};




#endif //CIRCLE_HPP