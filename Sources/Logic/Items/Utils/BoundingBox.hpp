#ifndef UTILS_BOUNDING_BOX
#define UTILS_BOUNDING_BOX

#include <QPointF>
#include <QRectF>

struct Point{
    double x;
    double y;
    operator QPointF() { return QPointF(x,y);}
};

struct BoundingBox
{
    BoundingBox(Point = Point{}, Point = Point{});
    QRectF getDrawableRect();  

public:
    Point m_topLeft;
    Point m_bottomRight;
};

#endif //UTILS_BOUNDING_BOX