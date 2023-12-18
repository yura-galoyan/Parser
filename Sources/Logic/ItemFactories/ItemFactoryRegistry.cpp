#include "ItemFactoryRegistry.hpp"

#include "RectFactory.hpp"
#include "CircleFactory.hpp"
#include "TextFactory.hpp"

ItemFactoryRegistry::ItemFactoryRegistry()
{
    m_registry["rect"] = std::make_unique<RectFactory>();
    m_registry["circle"] = std::make_unique<CircleFactory>();
    m_registry["text"] = std::make_unique<TextFactory>();
}

std::unique_ptr<ItemFactory>& ItemFactoryRegistry::operator[](const std::string& key)
{
    
    if(m_registry.find(key) == m_registry.end()){
        throw std::out_of_range{"wrong key: " + key};
    }
    return m_registry.at(key);
}

const std::unique_ptr<ItemFactory> &ItemFactoryRegistry::operator[](const std::string &key) const
{
    return m_registry.at(key);
}
