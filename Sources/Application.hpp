#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "CommandFactories/CommandFactoryRegistry.hpp"
#include "InputOutputSystem.hpp"
#include "CommandParser.hpp"
#include "Items/Document.hpp"
class Application
{
public:
    Application();

private:
    std::shared_ptr<Document> m_doc;
};


#endif //APPLICATION_HPP