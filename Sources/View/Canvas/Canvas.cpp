#include <QGraphicsItem>
#include <QVBoxLayout>
#include <QSlider>
#include <QLabel>

#include "Canvas.hpp"

Canvas::Canvas( QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(720,720);
    view = new CanvasGraphicsView();

    QVBoxLayout *box = new QVBoxLayout;
    QHBoxLayout *hbx = new QHBoxLayout;

    box->addWidget(view);
    box->addLayout(hbx);

    setLayout(box);
}
