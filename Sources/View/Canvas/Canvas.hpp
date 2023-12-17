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
public:
    Canvas( QWidget *parent = nullptr);
};

#endif // CANVAS_WDIGET_HPP