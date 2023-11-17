#ifndef COMMAND_FACTORY_REGISTRY_HPP
#define COMMAND_FACTORY_REGISTRY_HPP

#include <unordered_map>
#include <memory>
#include <string>

#include "CommandFactory.hpp"
#include "../Items/Document.hpp"
class CommandFactoryRegistry
{
public:
    CommandFactoryRegistry(std::shared_ptr<Document> doc);
    std::unique_ptr<CommandFactory>& operator[](const std::string& key);
    
private:
    std::unordered_map<std::string,std::unique_ptr<CommandFactory>> m_registry;
    std::shared_ptr<Document> m_doc{nullptr};
};


#endif //COMMAND_FACTORY_REGISTRY_HPP