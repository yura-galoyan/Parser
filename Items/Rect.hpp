#ifndef RECT_HPP
#define RECT_HPP

#include "Item.hpp"
#include <ostream>

#include<unordered_map>
#include <any>



class Rect : public Item
{
public:
    Rect() {
        m_type = Item::Type::Rect;
    };
    Rect(Point topLeft, Point bottomRight);
    void setTopLeft(Point pos){ m_TopLeft = pos; }
    void setBottomRight(Point pos){ m_BottomRight = pos; }
    Point getTopLeft() const { return m_TopLeft; }
    Point getBottomRight() const { return m_BottomRight; }
    void accept(iSerializer& visitor)  override;
    
    [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Rect& rect) {
        out << "Top left: " << rect.m_TopLeft.x << " " << rect.m_TopLeft.y 
                  << " | Bottom Right: " << rect.m_BottomRight.x << " " << rect.m_BottomRight.y;
        return out;
    }

    std::unique_ptr<Item> clone() override { return std::make_unique<Rect>(*this); };
private:
    Point m_TopLeft;
    Point m_BottomRight;

};


#endif //RECT_HPP