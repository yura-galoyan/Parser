#include "SlideWidget.hpp"

SlideWidget::SlideWidget(const Slide &slide, QWidget *parent)
    : m_slide{slide}
{
    std::cout << "slide widget created" << std::endl;
    setMinimumSize(QSize{50,50,});


    setMinimumWidth(100);
    setMaximumWidth(300);
    QPalette pal = QPalette{};
    pal.setColor(QPalette::Window, QColor{127,255,0,228});
    setAutoFillBackground(true);
    setPalette(pal);

}
