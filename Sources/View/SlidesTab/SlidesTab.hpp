#ifndef SLIDES_TAB_HPP
#define SLIDES_TAB_HPP

#include "SlideWidget.hpp"

#include <QWidget>
#include <vector>
#include <QVBoxLayout>

class SlidesTab : public QWidget
{
    Q_OBJECT
public:
    SlidesTab(QWidget* parent = nullptr);

public slots:
    void refreshTabs();

private:
    std::vector<SlideWidget*> m_SlidesVec;
    QVBoxLayout* m_pVBoxLayout;


};

#endif //SLIDES_TAB_HPP