#ifndef RECT_SHAPE_HPP
#define RECT_SHAPE_HPP

#include "iShape.hpp"
#include "../Visual/IVisualDisplayable.hpp"
#include "../../Logic/Items/Rect.hpp"


class RectShape : public iShape, public IVisualDisplayable
{
public:
    RectShape() : iShape(Item::Type::Rect) {}
    void draw(QPaintDevice& device,Item* item ) override {
        QPen pen;
        pen.setWidth(2);
        pen.setColor(Qt::red);
        pen.setBrush(QBrush(Qt::red));

        QPainter painter(&device);

        painter.setPen(pen);
        auto pRectItem = dynamic_cast<Rect*>(item);
        painter.drawRect(pRectItem->getDrawableInfo());
        painter.end();
    }
    
    std::unique_ptr<iShape> clone() override { 
        return std::make_unique<RectShape>(); 
    };
};
 
#endif //RECT_SHAPE_HPP
