#ifndef SERIALIZER_TXT_SERIALIZER_HPP
#define SERIALIZER_TXT_SERIALIZER_HPP

#include "iSerializer.hpp"

class txtSerializer : public iSerializer
{
public:
    virtual void visit(double& circle) ;
    virtual void visit(Point& circle) ;
    virtual void visit(Circle& circle) ;
    virtual void visit(Rect& circle) ;
    virtual void visit(Slide& circle) ;
    virtual void visit(Document& circle) ;

};




#endif //SERIALIZER_TXT_SERIALIZER_HPP