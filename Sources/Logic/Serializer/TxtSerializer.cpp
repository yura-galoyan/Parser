#include "TxtSerializer.hpp"

#include "../Items/Item.hpp"
#include "../Items/Slide.hpp"
#include "../Items/Document.hpp"


void TxtSerializer::visit(double& val)
{
    result << val << " ";
}

void TxtSerializer::visit(std::size_t & val)
{
    result << val << " ";
}

void TxtSerializer::visit(Point& val)
{
    result << val.x <<  " " << val.y << " ";
}

void TxtSerializer::visit(std::string&& val)
{
    result << val << " ";
}

void TxtSerializer::visit(std::string& val)
{
    result << "\n" << val << " ";
}

void TxtSerializer::visit(Item::Type &type)
{
    result << static_cast<std::size_t>(type) << " ";
}

void TxtSerializer::visit(std::unique_ptr<Item>& val)
{
    result << "\n";
    val->accept(*this);
}

void TxtSerializer::visit(std::vector<Slide>& slides)
{
    for(auto& slide : slides){
        slide.accept(*this);
    }
}


void TxtSerializer::visit(Slide& val)
{
    result << "\n";
    val.accept(*this);
}

void TxtSerializer::visit(Document& val)
{
    result << "\n";
    val.accept(*this);
}

void TxtSerializer::visit(Qt::GlobalColor &color)
{
    result << static_cast<std::size_t>(color);
}
