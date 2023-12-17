#include "SlideWidget.hpp"

#include <iostream>

SlideWidget::SlideWidget(const Slide &slide, QWidget *parent)
    : m_slide{slide}
{
    setMinimumSize(QSize{30,100});    
    setMaximumSize(QSize{640,360});
    
    QPalette pal = QPalette{};
    pal.setColor(QPalette::Window, QColor{127,255,0,228});
    setAutoFillBackground(true);
    setPalette(pal);

}
