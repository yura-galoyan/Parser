#include "ItemFactoryRegistry.hpp"

#include "RectFactory.hpp"

ItemFactoryRegistry::ItemFactoryRegistry()
{
    m_registry["rect"] = std::make_unique<RectFactory>();
    m_registry["Circle"] = std::make_unique<RectFactory>();
}