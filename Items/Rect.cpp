#include "Rect.hpp"

Rect::Rect(Point topLeft, Point bottomRight)
{
    attributes()["top left"] = topLeft;
    attributes()["bottom right"] = bottomRight;
}