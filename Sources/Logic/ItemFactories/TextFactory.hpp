#ifndef TEXT_FACTORY_HPP
#define TEXT_FACTORY_HPP

#include "ItemFactory.hpp"

class TextFactory : public ItemFactory
{
public:
    std::unique_ptr<Item> createItem(const Tokenizer::Tokens& input) const override;

};

#endif //TEXT_FACTORY_HPP