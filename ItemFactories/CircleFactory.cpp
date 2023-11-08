#include "CircleFactory.hpp"
#include "../Items/Circle.hpp"

#include <iostream>
#include "../Utils/AnyHelper.hpp"


std::unique_ptr<Item> CircleFactory::createItem(const Tokenizer::Tokens &input) const
{
    auto circle = std::make_unique<Circle>( std::stod(input[4]), std::stod(input[6]), std::stod(input[8]));
    return std::move(circle);

}