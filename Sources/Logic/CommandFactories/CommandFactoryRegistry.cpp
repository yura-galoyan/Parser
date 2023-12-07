
#include "AddCommandFactory.hpp"
#include "AddSlideCommandFactory.hpp"
#include "CommandFactoryRegistry.hpp"
#include "DisplayCommandFactory.hpp"
#include "DrawCommandFactory.hpp"
#include "LoadCommandFactory.hpp"
#include "RemoveCommandFactory.hpp"
#include "SaveCommandFactory.hpp"

/// @brief add Factories ///TODO:
CommandFactoryRegistry::CommandFactoryRegistry(std::shared_ptr<Document> doc)
{
    m_registry["add"] = std::make_unique<AddCommandFactory>(doc);
    m_registry["save"] = std::make_unique<SaveCommandFactory>(doc);
    m_registry["load"] = std::make_unique<LoadCommandFactory>(doc);
    m_registry["remove"] = std::make_unique<RemoveCommandFactory>(doc);
    m_registry["display"] = std::make_unique<DisplayCommandFactory>(doc);
    m_registry["addslide"] = std::make_unique<AddSlideCommandFactory>(doc);
    m_registry["draw"] = std::make_unique<DrawCommandFactory>(doc);
}

std::unique_ptr<CommandFactory>& CommandFactoryRegistry::operator[](const std::string &key)
{
    return m_registry.at(key);
}
