#include <QGraphicsItem>
#include <QVBoxLayout>
#include <QSlider>
#include <QLabel>

#include "Canvas.hpp"

Canvas::Canvas( QWidget *parent)
    : QWidget(parent)
{
    scene = new QGraphicsScene(QRectF(0, 0, 1080, 640));
    view = new CanvasGraphicsView(scene);

    QVBoxLayout *box = new QVBoxLayout;
    QHBoxLayout *hbx = new QHBoxLayout;

    box->addWidget(view);
    box->addLayout(hbx);

    setLayout(box);
}
