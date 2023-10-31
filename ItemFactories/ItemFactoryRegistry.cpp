#include "ItemFactoryRegistry.hpp"

#include "RectFactory.hpp"
#include "CircleFactory.hpp"

ItemFactoryRegistry::ItemFactoryRegistry()
{
    m_registry["rect"] = std::make_unique<RectFactory>();
    m_registry["Circle"] = std::make_unique<CircleFactory>();
}

std::unique_ptr<ItemFactory>& ItemFactoryRegistry::operator[](const std::string& key)
{
    return m_registry.at(key);
}

const std::unique_ptr<ItemFactory> &ItemFactoryRegistry::operator[](const std::string &key) const
{
    return m_registry.at(key);
}
