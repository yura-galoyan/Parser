#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include "Factoires/CommandFactoryRegistry.hpp"
#include "InputOutputSystem.hpp"
#include "CommandParser.hpp"
#include "Document.hpp"
class Controller
{
public:
    Controller(std::shared_ptr<Document> doc = nullptr);
    void run();
    


private:
    std::shared_ptr<Document> m_doc;
    CommandFactoryRegistry m_CommandFactoryRegistry;
    CommandParser m_parser;
};


#endif //CONTROLLER_HPP