#ifndef TEXT_SHAPE_HPP
#define TEXT_SHAPE_HPP

#include "iShape.hpp"
#include "../Visual/IVisualDisplayable.hpp"
#include "../../Logic/Items/Text.hpp"

class TextShape : public iShape, public IVisualDisplayable //, TextualDisplayable
{
public:
    TextShape() : iShape(Item::Type::Text) {}
    void draw(QPaintDevice& image, Item* item ) override {
        QPen pen;
        pen.setWidth(2);
        pen.setColor(Qt::red);
        pen.setBrush(QBrush(Qt::red));
        QPainter painter(&image);
        painter.setPen(pen);
        auto pTextItem = dynamic_cast<Text*>(item);
        painter.drawText(pTextItem->getBoundingBox().getDrawableRect(), QString::fromStdString(pTextItem->getText()) );
    }

    std::unique_ptr<iShape> clone() override { 
        return std::make_unique<TextShape>(); 
    };
};
 
#endif //TEXT_SHAPE_HPP
