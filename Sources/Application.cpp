#include "Application.hpp"
#include <iomanip>
using IOS = InputOutputSystem;

Application::Application()
{
    m_doc = std::make_shared<Document>();
}

