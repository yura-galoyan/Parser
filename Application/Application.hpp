#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Controller.hpp"
#include "Items/Document.hpp"

#include <memory>

class Application
{
public:
    Application();
    int exec();

private:
    std::shared_ptr<Document> m_doc;
    Controller m_controller;

};


#endif //APPLICATION_HPP