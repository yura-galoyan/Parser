#ifndef RECT_HPP
#define RECT_HPP

#include "Item.hpp"
#include <ostream>




class Rect : public Item
{
public:
    Rect(double x1, double y1, double x2, double y2);


    // [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Rect& rect) {
    //     out << "Top left: " << rect.m_TopLeft.x << " " << rect.m_TopLeft.y 
    //               << " | Bottom Right: " << rect.m_BottomRight.x << " " << rect.m_BottomRight.y;
    //     return out;
    // }


};


#endif //RECT_HPP