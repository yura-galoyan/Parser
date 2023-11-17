#ifndef ITEM_FACTORY_HPP
#define ITEM_FACTORY_HPP

#include "../Tokenizer.hpp"
#include "../Items/Item.hpp"

#include <string>
#include <memory>
class ItemFactory 
{
public:
    virtual std::unique_ptr<Item> createItem(const Tokenizer::Tokens& input) const = 0;
};


#endif //ITEM_FACTORY_HPP