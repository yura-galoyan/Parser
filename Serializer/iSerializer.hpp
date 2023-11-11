#ifndef SERIALIZER_I_SERIALIZER_HPP
#define SERIALIZER_I_SERIALIZER_HPP

class Item;
class Slide;
class Document;
struct Point;

#include <sstream>

class iSerializer
{
public:
    virtual void visit(double& circle) = 0;
    virtual void visit(Point& circle) = 0;
    virtual void visit(Item& circle) = 0;
    virtual void visit(Slide& circle) = 0;
    virtual void visit(Document& circle) = 0;

    auto stealResult() { return std::move(result); }

protected:
    std::stringstream result;
};


#endif //SERIALIZER_I_SERIALIZER_HPP