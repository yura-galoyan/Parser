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
    Circle(Point p1, Point p2);
    void accept(iSerializer& visitor) override;
    std::unique_ptr<Item> clone() override { return std::make_unique<Circle>(*this); };
};




#endif //CIRCLE_HPP
