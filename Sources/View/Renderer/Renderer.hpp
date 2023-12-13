#ifndef RENDERER_HPP
#define RENDERER_HPP

#include "../../Logic/Items/Slide.hpp"
#include "../Shapes/ShapeLibrary.hpp"
#include "../../Director/Director.hpp"

class Renderer
{
public:
    void refresh(QPaintDevice& dev){
        draw( Director::getInstance().getDocument().getCurrSlide()  ,dev);
    }

    void draw(const Slide& slide, QPaintDevice& image){
        for(const auto& item : slide){
            const auto& pShape = ShapeLibrary::getShapeFrom(item->type());
            pShape->setItem(item.get());
            dynamic_cast<IVisualDisplayable*>(pShape.get())->draw(image, item.get());
        }
    };
};

#endif //RENDERER_HPP
