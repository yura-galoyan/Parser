#include "../View/Renderer/Renderer.hpp"
#include "../MainWindow.hpp"
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
    return *m_document;
}

void Director::setCanvas(QWidget *canvas)
{
    m_pCanvas = canvas;
    m_pLabel = new QLabel(m_pCanvas);
    m_pLabel->setMinimumSize( 1920,1080   );
    m_pLabel->setScaledContents(false);
}

void Director::setMainWindow(MainWindow* window)
{
    m_pWindow = window;
}

MainWindow* Director::getMainWindow()
{
    return m_pWindow;
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

    auto width = 1920;
    auto height = 1080;


    QImage image(QSize{width,height}, QImage::Format::Format_RGB32);


    renderer.draw(m_document->getCurrSlide(), image);
    std::cout << "curr slide id: " << m_document->getCurrSlideId() << std::endl;
    
    auto pixmap = QPixmap::fromImage(image);

    if(pixmap.isNull()){
        std::cout << "could not create pixmap" << std::endl;
    }


    m_pLabel->setPixmap(pixmap);
    m_pLabel->repaint();
    emit refreshDocument();
}

Director::Director(QWidget *parent)
    :QWidget(parent)
{
    m_document = std::make_shared<Document>();
}
