#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "../../Logic/Items/Slide.hpp"
#include "../Shapes/ShapeLibrary.hpp"

#include <QImage>

class Renderer
{
public:
    void draw(const Slide& slide, QPaintDevice& image){
        for(const auto& item : slide){
            const auto& pShape = ShapeLibrary::getShapeFrom(item->type());
            pShape->setItem(item.get());
            pShape->draw(image);
        }
    };
};

#endif //RENDERER_HPP
