#ifndef SHAPE_LIBRARY_HPP
#define SHAPE_LIBRARY_HPP

#include "ShapeRegistry.hpp"

class ShapeLibrary
{
public:
    static auto getShapeFrom(Item::Type t){
        return m_shapeRegistry[t]->clone();
    }

private:
    inline static ShapeRegistry m_shapeRegistry;

};


#endif //SHAPE_LIBRARY_HPP
