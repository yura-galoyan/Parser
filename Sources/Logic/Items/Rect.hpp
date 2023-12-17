#ifndef RECT_HPP
#define RECT_HPP

#include "Item.hpp"

class Rect : public Item
{
public:
    Rect() {
        m_type = Item::Type::Rect;
    };
    Rect(Point topLeft, Point bottomRight);
    void accept(iSerializer& visitor)  override;
    std::unique_ptr<Item> clone() override { return std::make_unique<Rect>(*this); };
};


#endif //RECT_HPP