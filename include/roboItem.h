#ifndef ROBOITEM_H
#define ROBOITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneWheelEvent>
#include "RobotAlgorithm.h"
class roboItem :public QObject,public QGraphicsItem
{
    Q_OBJECT
public:
    roboItem();
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
    QRectF boundingRect() const override;
    void updateImage(QImage img);
    void updatePoints(QPolygonF points);
    void updateLine(QLine line);
public:
    void wheelEvent(QGraphicsSceneWheelEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
public slots:
      void updateMap(QImage img);
      void updateRobotPose(RobotPose pose);
      void updateLaserPoints(QPolygonF points);
      void updatePath(QPolygonF points);
private:
    QImage m_images;
    QImage m_map;
    QPixmap m_robotImg;
    QPolygonF m_points;
    QLine m_lines;
    double m_scaleValue=1;
    bool m_isMousePress=false;
    QPointF m_pressedPose;
    RobotPose m_currRobotPose;
    QPolygonF m_laserPoints;
    QPolygonF m_pathPoints;
private:
    void drawLine(QPainter* painter);
    void drawImage(QPainter* painter);
    void drawPoints(QPainter* painter);
    void drawMap(QPainter* painter);
    void drawRobotPose(QPainter* painter);
    void drawLaserScan(QPainter* painter);
    void drawPath(QPainter* painter);
};

#endif // ROBOITEM_H
