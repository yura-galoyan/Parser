#include "SlideWidget.hpp"

SlideWidget::SlideWidget(const Slide &slide, QWidget *parent)
    : m_slide{slide}
{
    setMinimumSize(QSize{50,50,});
}