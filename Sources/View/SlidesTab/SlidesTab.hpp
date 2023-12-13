#ifndef SLIDES_TAB_HPP
#define SLIDES_TAB_HPP

#include <QWidget>
#include "SlideWidget.hpp"
#include <vector>

class SlidesTab : public QWidget
{
    Q_OBJECT
public:
    SlidesTab(QWidget* parent = nullptr);

public slots:
    void refreshTabs();

private:
    std::vector<SlideWidget*> m_SlidesVec;

};

#endif //SLIDES_TAB_HPP