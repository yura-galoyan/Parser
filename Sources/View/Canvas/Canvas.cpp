#include <QGraphicsItem>
#include <QVBoxLayout>
#include <QSlider>
#include <QLabel>

#include "Canvas.hpp"

Canvas::Canvas( QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(720,480);
    view = new CanvasGraphicsView();

    QVBoxLayout *box = new QVBoxLayout;
    QHBoxLayout *hbx = new QHBoxLayout;

    box->addWidget(view);
    box->addLayout(hbx);

    setLayout(box);

    QPalette pal = QPalette{};
    pal.setColor(QPalette::Window, QColor{255,255,0,16});
    setAutoFillBackground(true); 
    setPalette(pal);
}
