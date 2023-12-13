#include "Director.hpp"

Director& Director::getInstance()
{
    if(!m_director){
        m_director = std::unique_ptr<Director>(new Director);
    }
    return *m_director;
}


Document& Director::getDocument()
{
    return m_document;
}

void Director::setCanvas(QWidget *canvas)
{
    m_pCanvas = canvas;
}

QWidget* Director::getCanvas()
{
    if(m_pCanvas){
        return m_pCanvas;
    }
    else {
        std::cout << "empty canvas" << std::endl;
        return nullptr;
    }
}
