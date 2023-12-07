#ifndef CIRCLE_SHAPE_HPP
#define CIRCLE_SHAPE_HPP

#include "iShape.hpp"
#include "../Visual/VisualDisplayable.hpp"

class CircleShape : public iShape, public VisualDisplayable //, TextualDisplayable
{
public:
    CircleShape() : iShape(Item::Type::Circle) {}
    void draw(QPaintDevice& image ) override {
        VisualDisplayable::draw( image, m_item);
    }
    std::unique_ptr<iShape> clone() override { 
        return std::make_unique<CircleShape>(); 
    };
};
 
#endif //CIRCLE_SHAPE_HPP