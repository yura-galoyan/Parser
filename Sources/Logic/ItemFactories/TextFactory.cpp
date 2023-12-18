#include "TextFactory.hpp"
#include "../Items/Text.hpp"
#include "ColorLibrary.hpp"

std::unique_ptr<Item> TextFactory::createItem(const Tokenizer::Tokens &input) const
{
    auto textItem = std::make_unique<Text>( 
        Point{std::stod(input[4]),std::stod(input[6])},
        Point{std::stod(input[8]),std::stod(input[10])},
        input[12] );

    textItem->setColor( ColorLibrary::getColorFrom(input[14]) );
    return std::move(textItem);
}