#ifndef SLIDE_WIDGET_HPP
#define SLIDE_WIDGET_HPP

#include "../../Logic/Items/Slide.hpp"

#include <QLabel>

class SlideWidget : public QLabel
{
    Q_OBJECT
public:
    SlideWidget( const Slide& slide, QWidget* parent = nullptr);
 
    auto& getSlide(){return m_slide; }

private:
    Slide m_slide;
};

#endif //SLIDE_WIDGET_HPP