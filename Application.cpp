#include "Application.hpp"

Application::Application()
{
    
}

int Application::exec()
{
    m_controller.run();
    return 0;
}