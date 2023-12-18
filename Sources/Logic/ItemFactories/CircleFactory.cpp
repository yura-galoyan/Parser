#include "CircleFactory.hpp"
#include "../Items/Circle.hpp"
#include "ColorLibrary.hpp"


std::unique_ptr<Item> CircleFactory::createItem(const Tokenizer::Tokens &input) const
{
    auto circle = std::make_unique<Circle>( Point{std::stod(input[4]), std::stod(input[6])}, std::stod(input[8]));
    circle->setColor( ColorLibrary::getColorFrom(input[10]) );
    return std::move(circle);
}
