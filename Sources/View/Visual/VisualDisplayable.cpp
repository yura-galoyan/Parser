#include "VisualDisplayable.hpp"

#include <QPen>
#include <QPainter>
#include "../../Items/Rect.hpp"
#include "../../Items/Circle.hpp"

void VisualDisplayable::draw(QPaintDevice& image, Item* item)
{

    QPen pen;
    pen.setColor(Qt::red);
    pen.setBrush(QBrush(Qt::red));
    
    QPainter painter(&image);

    painter.setPen(pen);


    switch (item->type())
    {
    case Item::Type::Rect:
    {

        std::cout << "call some rect drawing function" << std::endl;
        auto drawableRect = dynamic_cast<Rect*>(item)->getDrawableInfo();
        painter.drawRect(drawableRect);
    }
        break;
    case Item::Type::Circle:
    {

        std::cout << "call some rect drawing function" << std::endl;
        auto drawableCenterRadius = dynamic_cast<Circle*>(item)->getDrawableInfo();
        painter.drawEllipse(drawableCenterRadius.first, drawableCenterRadius.second, drawableCenterRadius.second);
    }
        break;
    case Item::Type::Text:
    {
        std::cout << "call some rect drawing function" << std::endl;
        
        // painter.drawText()

    }
        break;
    default:
        break;
    }
}