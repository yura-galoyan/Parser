#include "CanvasGraphicsView.hpp"

#include <iostream>

CanvasGraphicsView::CanvasGraphicsView(QGraphicsScene *pScene, QWidget *parent)
    : QGraphicsView(pScene, parent)
{
    setRenderHint(QPainter::Antialiasing, false);
    setViewportUpdateMode(ViewportUpdateMode::FullViewportUpdate);
}

void CanvasGraphicsView::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::MouseButton::LeftButton)
    {

    }
}


void CanvasGraphicsView::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::MouseButton::LeftButton)
    {

    }
}


void CanvasGraphicsView::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() == Qt::MouseButton::LeftButton)
    {

    }
}
