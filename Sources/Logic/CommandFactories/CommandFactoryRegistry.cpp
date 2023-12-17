
#include "AddCommandFactory.hpp"
#include "AddSlideCommandFactory.hpp"
#include "CommandFactoryRegistry.hpp"
#include "DisplayCommandFactory.hpp"
#include "DrawCommandFactory.hpp"
#include "LoadCommandFactory.hpp"
#include "RemoveCommandFactory.hpp"
#include "SaveCommandFactory.hpp"
#include "ChangeSlideCommandFactory.hpp"

/// @brief add Factories ///TODO:
CommandFactoryRegistry::CommandFactoryRegistry()
{
    m_registry["add"] = std::make_unique<AddCommandFactory>();
    m_registry["save"] = std::make_unique<SaveCommandFactory>();
    m_registry["load"] = std::make_unique<LoadCommandFactory>();
    m_registry["remove"] = std::make_unique<RemoveCommandFactory>();
    m_registry["display"] = std::make_unique<DisplayCommandFactory>();
    m_registry["addslide"] = std::make_unique<AddSlideCommandFactory>();
    m_registry["draw"] = std::make_unique<DrawCommandFactory>();
    m_registry["change"] = std::make_unique<ChangeSlideCommandFactory>();
}

std::unique_ptr<CommandFactory>& CommandFactoryRegistry::operator[](const std::string &key)
{
    return m_registry.at(key);
}
