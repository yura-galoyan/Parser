#ifndef RECT_HPP
#define RECT_HPP

#include "Item.hpp"
#include <iostream>


class Rect : public Item
{
public:
    struct Point{
        double x;
        double y;
    };

    Rect(){ setType(Item::Type::Rect); }
    bool setTopLeft(Point pos){ m_TopLeft = pos; return true; };
    bool setBottomRight(Point pos){ m_BottomRight = pos; return true; };
    Point getTopLeft() const { return m_TopLeft; };
    Point getBottomRight() const { return m_BottomRight; };

    [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Rect& rect) {
        std::cout << "Top left: " << rect.m_TopLeft.x << " " << rect.m_TopLeft.y 
                  << " | Bottom Right: " << rect.m_BottomRight.x << " " << rect.m_BottomRight.y << std::endl;
            return out;
    }

private:
    Point m_TopLeft;
    Point m_BottomRight;

};


#endif //RECT_HPP