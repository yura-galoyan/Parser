#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "../../Logic/Items/Slide.hpp"
#include "../Shapes/ShapeLibrary.hpp"

class Renderer
{
    Q_OBJECT
public slots:
    static void draw(const Slide& slide = Slide{}, QPaintDevice& image){
        for(const auto& item : slide){
            const auto& pShape = ShapeLibrary::getShapeFrom(item->type());
            pShape->setItem(item.get());
            dynamic_cast<IVisualDisplayable*>(pShape.get())->draw(image, item.get());
        }
    };
};

#endif //RENDERER_HPP