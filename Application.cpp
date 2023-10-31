#include "Application.hpp"

Application::Application() : m_doc(std::make_shared<Document>()), m_controller(m_doc)
{

}

int Application::exec()
{
    m_controller.run();
    return 0;
}