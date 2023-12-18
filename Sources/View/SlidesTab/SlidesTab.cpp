#include "../../Director/Director.hpp"
#include "../Renderer/Renderer.hpp"
#include "../../MainWindow.hpp"
#include "SlidesTab.hpp"

#include <QPalette>

SlidesTab::SlidesTab(QWidget *parent)
    : QWidget(parent)
{
    setMinimumWidth(30);
    setMaximumWidth(360);
    QPalette pal = QPalette{};
    pal.setColor(QPalette::Window, QColor{0,255,0,32});
    setAutoFillBackground(true); 
    setPalette(pal);

    
    m_pVBoxLayout = new QVBoxLayout;
    m_pVBoxLayout->setAlignment(Qt::AlignTop);
    setLayout(m_pVBoxLayout);
}


void SlidesTab::refreshTabs(){
    Renderer renderer;
    m_SlidesVec.clear();
    m_SlidesVec.shrink_to_fit();

    delete layout();
    m_pVBoxLayout = new QVBoxLayout;
    m_pVBoxLayout->setAlignment(Qt::AlignTop);
    setLayout(m_pVBoxLayout);


    for(const auto& slide : Director::getInstance().getDocument()){
        SlideWidget* pSlideWidget = new SlideWidget(slide);
        m_SlidesVec.push_back(pSlideWidget);
        m_pVBoxLayout->addWidget(pSlideWidget);
    }

    for(auto& slideWidget : m_SlidesVec){

        constexpr auto width = 1920;
        constexpr auto height = 1080;


        slideWidget->setScaledContents(true);

        QImage image(width,height, QImage::Format::Format_RGB32);

        renderer.draw(slideWidget->getSlide(), image);
  
  
        QPixmap pixmap = QPixmap::fromImage(image);
        constexpr int w = width / 8;
        constexpr int h = height / 8;

        slideWidget->setPixmap(pixmap.scaled(w,h,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    }
};
