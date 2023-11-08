#include "Rect.hpp"

Rect::Rect(double x1, double y1, double x2, double y2)
{
    attributes()["x1"] = std::to_string(x1);
    attributes()["y1"] = std::to_string(y1);
    attributes()["x2"] = std::to_string(x2);
    attributes()["y2"] = std::to_string(y2);
}