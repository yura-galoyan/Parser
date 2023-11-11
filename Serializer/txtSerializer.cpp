#include "txtSerializer.hpp"

#include "../Items/Item.hpp"
#include "../Items/Slide.hpp"
#include "../Items/Circle.hpp"
#include "../Items/Document.hpp"


void txtSerializer::visit(double& val)
{
    result << val << " ";
}

void txtSerializer::visit(Point& val)
{
    result << val.x <<  " " << val.y << " ";
}

void txtSerializer::visit(Item& val)
{
    val.accept(*this);
}


void txtSerializer::visit(Slide& val)
{
    /// TODO:
    // val.accept(*this);
}

void txtSerializer::visit(Document& val)
{
    /// TODO:
    // val.accept(*this);
}
