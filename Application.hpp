#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Controller.hpp"
#include "Document.hpp"

#include <memory>

class Application
{
public:
    Application();
    int exec();

private:
    Controller m_controller;

private:
    std::shared_ptr<Document> m_doc;

};


#endif //APPLICATION_HPP