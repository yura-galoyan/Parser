#ifndef CIRCLE_FACTORY_HPP
#define CIRCLE_FACTORY_HPP

#include "ItemFactory.hpp"

class CircleFactory : public ItemFactory
{
public:
    std::unique_ptr<Item> createItem(const Tokenizer::Tokens& input) const override;

};

#endif //CIRCLE_FACTORY_HPP