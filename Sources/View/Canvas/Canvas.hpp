#ifndef CANVAS_WDIGET_HPP
#define CANVAS_WDIGET_HPP

#include <QGraphicsScene>
#include <QPushButton>
#include <QMouseEvent>
#include <QSlider>
#include <QWidget>
#include <QPointF>

#include "CanvasGraphicsView/CanvasGraphicsView.hpp"

class Canvas : public QWidget
{
    Q_OBJECT
private:
    QGraphicsScene *scene;
    CanvasGraphicsView *view;

public:
    Canvas( QWidget *parent = nullptr);
    CanvasGraphicsView *&getView() { return view; }
};

#endif // CANVAS_WDIGET_HPP