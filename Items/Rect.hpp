#ifndef RECT_HPP
#define RECT_HPP

#include "Item.hpp"
#include <ostream>


class Rect : public Item
{
public:
    Rect(Point topLeft, Point bottomRight);

    void setTopLeft(Point pos){ m_TopLeft = pos; }
    void setBottomRight(Point pos){ m_BottomRight = pos; }
    Point getTopLeft() const { return m_TopLeft; }
    Point getBottomRight() const { return m_BottomRight; }

    [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Rect& rect) {
        out << "Top left: " << rect.m_TopLeft.x << " " << rect.m_TopLeft.y 
                  << " | Bottom Right: " << rect.m_BottomRight.x << " " << rect.m_BottomRight.y;
        return out;
    }

private:
    Point m_TopLeft;
    Point m_BottomRight;

};


#endif //RECT_HPP