#ifndef SERIALIZER_I_SERIALIZER_HPP
#define SERIALIZER_I_SERIALIZER_HPP

class Item;
class Slide;
class Document;
struct Point;

#include <vector>
#include <sstream>
#include <string>

class iSerializer
{
public:
    virtual void visit(double& val) = 0;
    virtual void visit(std::size_t& val) = 0;
    virtual void visit(Point& point) = 0;
    virtual void visit(std::string&& val) = 0;
    virtual void visit(std::string& val) = 0;
    virtual void visit(Item& item) = 0;
    virtual void visit(Slide& slide) = 0;
    virtual void visit(std::vector<Slide>& slides) = 0;
    virtual void visit(Document& circle) = 0;
public:
    auto stealResult() { return std::move(result); }
    void setStream(std::stringstream stream) { result = std::move(stream); }

protected:
    std::stringstream result;
};


#endif //SERIALIZER_I_SERIALIZER_HPP