#ifndef VISUAL_DISPLAYABLE_HPP
#define VISUAL_DISPLAYABLE_HPP

#include <iostream>
#include <QPaintDevice>

#include "../../Items/Item.hpp"
class VisualDisplayable
{
public:
    virtual void draw( QPaintDevice& imagem , Item* item);

};

#endif //VISUAL_DISPLAYABLE_HPP