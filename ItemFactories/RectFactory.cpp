#include "RectFactory.hpp"
#include "../Items/Rect.hpp"

std::unique_ptr<Item> RectFactory::createItem(const Tokenizer::Tokens &input) const
{
    auto rect = std::make_unique<Rect>( std::stod(input[4]),std::stod(input[6]), std::stod(input[8]),std::stod(input[10]) );
    return std::move(rect);
}