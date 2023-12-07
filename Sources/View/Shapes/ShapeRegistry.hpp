#ifndef SHAPE_REGISTRY_HPP
#define SHAPE_REGISTRY_HPP

#include <unordered_map>
#include <memory>
#include "iShape.hpp"

#include "../../Logic/Items/Item.hpp"

#include "RectShape.hpp"
#include "CircleShape.hpp"

class ShapeRegistry
{
public:
    ShapeRegistry(){
        shapes.insert({Item::Type::Rect, std::make_unique<RectShape>()});
        shapes.insert({Item::Type::Circle, std::make_unique<CircleShape>()});
    }

    auto& operator[](Item::Type t){
        return shapes[t];
    }


private:
    std::unordered_map<Item::Type, std::unique_ptr<iShape>> shapes;
};

#endif //SHAPE_REGISTRY_HPP




