#include "CanvasGraphicsView.hpp"
#include <iostream>

CanvasGraphicsView::CanvasGraphicsView( QWidget *parent)
    :QWidget( parent)
{
    
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
