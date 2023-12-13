#include "Director.hpp"
#include "../View/Renderer/Renderer.hpp"


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
    m_pLabel = new QLabel(m_pCanvas);

    m_pLabel->setBaseSize(m_pCanvas->size());
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

void Director::onDocumentChanged()
{
    Renderer renderer;

    QImage image(m_pCanvas->size(), QImage::Format::Format_RGB32);
    
    renderer.draw(m_document.getCurrSlide(), image);

    // image.save("C:/Users/yura/Desktop/photos/doc.png");



    m_pLabel->setFixedSize(size());

    m_pLabel->setSizePolicy(QSizePolicy::Expanding,
                                    QSizePolicy::Expanding);
    m_pLabel->setPixmap(QPixmap::fromImage(image));
    emit refreshDocument();
}
