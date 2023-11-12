#include "TxtDeserializer.hpp"


#include "../Items/Document.hpp"
#include "../Items/Slide.hpp"
#include "../Items/Item.hpp"

void TxtDeserializer::visit(Document &val)
{
    val.accept(*this);
}


void TxtDeserializer::visit(double& val) 
{
    result >> val;
}

void TxtDeserializer::visit(std::size_t &val)
{
    result >> val;
}

void TxtDeserializer::visit(Point& val) 
{
    result >> val.x >> val.y;
}

void TxtDeserializer::visit(std::string&& val) 
{
    // empty
}

void TxtDeserializer::visit(std::string& val) 
{
    result >> val;
    m_lastToken = val;
}

void TxtDeserializer::visit(Item& val) 
{
    val.accept(*this);
}

void TxtDeserializer::visit(Slide& val) 
{
    val.accept(*this);
}

void TxtDeserializer::visit(std::vector<Slide>& slides)
{
    std::string tmp;
    result >> tmp;
    /*   "slide"   */
    if(tmp == "slide");
    for(auto& slide : slides){
        slide.accept(*this);
    }
}
