#ifndef SERIALIZER_I_SERIALIZER_HPP
#define SERIALIZER_I_SERIALIZER_HPP

class Circle;
class Rect;
class Slide;
class Document;
struct Point;

#include <sstream>

class iSerializer
{
public:
    virtual void visit(double& circle) = 0;
    virtual void visit(Point& circle) = 0;
    virtual void visit(Circle& circle) = 0;
    virtual void visit(Rect& circle) = 0;
    virtual void visit(Slide& circle) = 0;
    virtual void visit(Document& circle) = 0;

protected:
    std::stringstream result;
};


#endif //SERIALIZER_I_SERIALIZER_HPP