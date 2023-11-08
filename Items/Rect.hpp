#ifndef RECT_HPP
#define RECT_HPP

#include "Item.hpp"
#include <ostream>

#include<unordered_map>
#include <any>



class Rect : public Item
{
public:
    Rect(Point topLeft, Point bottomRight);


    // [[deprecated]] friend std::ostream& operator<<(std::ostream& out, const Rect& rect) {
    //     out << "Top left: " << rect.m_TopLeft.x << " " << rect.m_TopLeft.y 
    //               << " | Bottom Right: " << rect.m_BottomRight.x << " " << rect.m_BottomRight.y;
    //     return out;
    // }


};


#endif //RECT_HPP