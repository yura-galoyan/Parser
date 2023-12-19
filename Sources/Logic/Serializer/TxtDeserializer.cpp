#include "TxtDeserializer.hpp"

#include <iostream>

#include "../Items/Document.hpp"
#include "../Items/Circle.hpp"
#include "../Items/Slide.hpp"
#include "../Items/Rect.hpp"
#include "../Items/Item.hpp"
#include "../Items/Text.hpp"

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
    result >> val;
    m_lastToken = val;
}

void TxtDeserializer::visit(std::string& val) 
{
    result >> val;
    m_lastToken = val;
}

void TxtDeserializer::visit(Item::Type &type)
{
    static char twice{2};
    std::size_t t;
    auto pos = result.tellg();
    result >> t;
    if(--twice){
        result.seekg(pos);
    }
    else{
        twice = 2;
    }
    type = static_cast<Item::Type>(t);
    m_last_type = type;
}

void TxtDeserializer::visit(std::unique_ptr<Item>& val) 
{
    /// TODO:
    switch (m_last_type){
        case Item::Type::Rect:
            val = std::make_unique<Rect>();
            break;
        case Item::Type::Circle:
            val = std::make_unique<Circle>();
            break;
        case Item::Type::Text:
            val = std::make_unique<Text>();
            break;
        default:
            std::cout << "undefined item" << std::endl;
            break;
    }
    val->accept(*this);
}

void TxtDeserializer::visit(Slide& val) 
{
    val.accept(*this);
}

void TxtDeserializer::visit(std::vector<Slide>& slides)
{
    for(auto& slide : slides){
        slide.accept(*this);
    }
}

void TxtDeserializer::visit(Qt::GlobalColor& color)
{
    std::size_t c;
    result >> c;
    color = static_cast<Qt::GlobalColor>(c);
}
