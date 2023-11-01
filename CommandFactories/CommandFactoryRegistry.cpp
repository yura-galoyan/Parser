#include "CommandFactoryRegistry.hpp"

#include "AddCommandFactory.hpp"
#include "RemoveCommandFactory.hpp"
#include "DisplayCommandFactory.hpp"
#include "AddSlideCommandFactory.hpp"

/// @brief add Factories ///TODO:
CommandFactoryRegistry::CommandFactoryRegistry(std::shared_ptr<Document> doc)
{
    m_registry["add"] = std::make_unique<AddCommandFactory>(doc);
    m_registry["remove"] = std::make_unique<RemoveCommandFactory>(doc);
    m_registry["display"] = std::make_unique<DisplayCommandFactory>(doc);
    m_registry["addslide"] = std::make_unique<AddSlideCommandFactory>(doc);
    
}

std::unique_ptr<CommandFactory>& CommandFactoryRegistry::operator[](const std::string &key)
{
    return m_registry.at(key);
}
