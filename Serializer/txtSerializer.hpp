#ifndef SERIALIZER_TXT_SERIALIZER_HPP
#define SERIALIZER_TXT_SERIALIZER_HPP

#include "iSerializer.hpp"

class txtSerializer : public iSerializer
{
public:
    virtual void visit(double& val) ;
    virtual void visit(Point& val) ;
    virtual void visit(Item& val) ;
    virtual void visit(Slide& val) ;
    virtual void visit(Document& val) ;

};




#endif //SERIALIZER_TXT_SERIALIZER_HPP