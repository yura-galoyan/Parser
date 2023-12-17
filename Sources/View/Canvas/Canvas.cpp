#include <QGraphicsItem>
#include <QVBoxLayout>
#include <QScrollBar>
#include <QSlider>
#include <QLabel>

#include "Canvas.hpp"

Canvas::Canvas( QWidget *parent)
    : QWidget(parent)
{
    setMinimumSize(720,480);

    QVBoxLayout *box = new QVBoxLayout;
    setLayout(box);

    QPalette pal = QPalette{};
    pal.setColor(QPalette::Window, QColor{255,255,0,16});
    setAutoFillBackground(true); 
    setPalette(pal);
}
