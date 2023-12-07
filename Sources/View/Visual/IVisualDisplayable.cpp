#include "IVisualDisplayable.hpp"

#include <QPen>
#include <QPainter>
#include "../../Logic/Items/Rect.hpp"
#include "../../Logic/Items/Circle.hpp"

void IVisualDisplayable::draw(QPaintDevice& image, Item* item)
{

    QPen pen;
    pen.setWidth(2);
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

        std::cout << drawableRect.left() << drawableRect.top() << drawableRect.right() << drawableRect.bottom() << std::endl; 

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

    painter.end();

}