#include "ToolBar.hpp"

#include <QLabel>

ToolBar::ToolBar(QToolBar * parent)
    : QToolBar(parent)
{
    auto rectAction = new QAction("Rectangle");
    auto circleAction = new QAction("Circle");

    addAction(rectAction);
    addAction(circleAction);

}