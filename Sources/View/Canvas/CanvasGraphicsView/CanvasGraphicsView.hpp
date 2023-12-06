#ifndef MY_VIEW_HPP
#define MY_VIEW_HPP

#include <QGraphicsRectItem>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QMouseEvent>
#include <QPolygonF>
#include <QPainter>
#include <QPointF>
#include <QDebug>
#include <QList>

class CanvasGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    CanvasGraphicsView(QGraphicsScene *pScene, QWidget *parent = nullptr);
   
protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;

};
#endif // MY_VIEW_HPP
