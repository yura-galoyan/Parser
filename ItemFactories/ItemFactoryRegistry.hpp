#ifndef ITEM_FACTORY_REGISTRY_HPP
#define ITEM_FACTORY_REGISTRY_HPP

#include <unordered_map>
#include <string>
#include <memory>

#include "ItemFactory.hpp"
class ItemFactoryRegistry
{
public:
    ItemFactoryRegistry(/*std::shared_ptr<Document> doc*/);
    std::unique_ptr<ItemFactory>& operator[](const std::string& key);
    
private:
    std::unordered_map<std::string,std::unique_ptr<ItemFactory>> m_registry;

};


#endif //ITEM_FACTORY_REGISTRY_HPP