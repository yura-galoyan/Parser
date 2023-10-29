#ifndef RECT_FACTORY_HPP
#define RECT_FACTORY_HPP

#include "ItemFactory.hpp"

class RectFactory : public ItemFactory
{
public:
    std::unique_ptr<Item> createItem(const Tokenizer::Tokens& input) const override;
};


#endif //RECT_FACTORY_HPP