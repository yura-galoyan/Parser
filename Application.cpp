#include "Application.hpp"

Application::Application()
{
    m_doc->addSlide(Slide{});
}

int Application::exec()
{
    m_controller.run();
    return 0;
}