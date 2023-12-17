#ifndef CIRCLE_SHAPE_HPP
#define CIRCLE_SHAPE_HPP

#include "iShape.hpp"
#include "../Visual/IVisualDisplayable.hpp"
#include "../../Logic/Items/Circle.hpp"

class CircleShape : public iShape, public IVisualDisplayable //, TextualDisplayable
{
public:
    CircleShape() : iShape(Item::Type::Circle) {}
    void draw(QPaintDevice& image, Item* item ) override {
        QPen pen;
        pen.setWidth(2);
        pen.setColor(Qt::red);
        pen.setBrush(QBrush(Qt::red));
        QPainter painter(&image);
        painter.setPen(pen);
        auto pCircleItem = dynamic_cast<Circle*>(item);
        painter.drawEllipse(pCircleItem->getBoundingBox().getDrawableRect());
    }
    
    std::unique_ptr<iShape> clone() override { 
        return std::make_unique<CircleShape>(); 
    };
};
 
#endif //CIRCLE_SHAPE_HPP
