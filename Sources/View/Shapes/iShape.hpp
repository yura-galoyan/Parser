#ifndef I_SHAPE_HPP
#define I_SHAPE_HPP

#include "../../Items/Item.hpp"
#include <QImage>

class iShape
{
    Item::Type type;
public:
    iShape(Item::Type t) { type = t; }
    virtual void draw(QPaintDevice& image ) = 0;
    virtual std::unique_ptr<iShape> clone() = 0;
    void setItem(Item* item) { m_item = item; };

protected:
    Item* m_item;
    auto getType(){ return type; }

};


#endif //I_SHAPE_HPP