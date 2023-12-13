#include "../Renderer/Renderer.hpp"
#include "SlidesTab.hpp"

#include <QPalette>

SlidesTab::SlidesTab(QWidget *parent)
    : QWidget(parent)
{
    setMinimumWidth(100);
    setMaximumWidth(300);
    QPalette pal = QPalette{};
    pal.setColor(QPalette::Window, QColor{0,255,0,32});
    setAutoFillBackground(true); 
    setPalette(pal);
}


void SlidesTab::refreshTabs(){
    Renderer renderer;


    for(auto slideWidget : m_SlidesVec){
        renderer.draw(slideWidget->getSlide(), *slideWidget);
    }
};