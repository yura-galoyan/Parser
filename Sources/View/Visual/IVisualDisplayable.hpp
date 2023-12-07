#ifndef VISUAL_DISPLAYABLE_HPP
#define VISUAL_DISPLAYABLE_HPP

#include <iostream>
#include <QPaintDevice>

#include "../../Logic/Items/Item.hpp"
class IVisualDisplayable
{
public:
    void draw( QPaintDevice& imagem , Item* item);
};

#endif //VISUAL_DISPLAYABLE_HPP
