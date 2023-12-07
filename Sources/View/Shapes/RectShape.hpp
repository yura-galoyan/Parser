#ifndef RECT_SHAPE_HPP
#define RECT_SHAPE_HPP

#include "iShape.hpp"
#include "../Visual/VisualDisplayable.hpp"


class RectShape : public iShape, public VisualDisplayable
{
public:
    RectShape() : iShape(Item::Type::Rect) {}
    void draw(QPaintDevice& image ) override {
        VisualDisplayable::draw(image, m_item);
    }
    
    std::unique_ptr<iShape> clone() override { 
        return std::make_unique<RectShape>(); 
    };
};
 
#endif //RECT_SHAPE_HPP