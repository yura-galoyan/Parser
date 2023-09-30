#ifndef ITEM_FACTORY_HPP
#define ITEM_FACTORY_HPP

#include <vector>
#include <string>
#include <memory>
#include "Item.hpp"

class ItemFactory
{
    using Token = std::string;
    using Tokens = std::vector<Token>;
public:
    std::unique_ptr<Item> createRect(const Tokens& tokens) const ;
    
};


#endif //ITEM_FACTORY_HPP