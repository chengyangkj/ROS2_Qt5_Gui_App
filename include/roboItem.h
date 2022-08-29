#ifndef ROBOITEM_H
#define ROBOITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QCursor>
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
      void updateLocalCostMap(QImage img);
      void updateRobotPose(RobotPose pose);
      void updateLaserPoints(QPolygonF points);
      void updatePath(QPolygonF points);
      void updateLocalPath(QPolygonF points);
      void updateGlobalCostMap(QImage img);
      void start2DPose();
      void start2DGoal();
      void updateLaserColor(QColor color);
private:
    QImage m_images;
    QImage m_LocalCostMap;
    QImage m_GlobalCostMap;
    QImage m_map;
    QPixmap m_robotImg;
    QPolygonF m_points;
    QLine m_lines;
    double m_scaleValue=1;
    bool m_isMousePress=false;
    QPointF m_pressedPose;
    QPointF m_startPose;
    QPointF m_endPose;
    RobotPose m_currRobotPose;
    RobotPose m_lastLocalCostMapRobotPose;
    QPolygonF m_laserPoints;
    QPolygonF m_pathPoints;
    QPolygonF m_localPathPoints;
    QCursor *m_currCursor=nullptr;
    QCursor *m_moveCursor=nullptr;
    QCursor *m_set2DPoseCursor=nullptr;
    QCursor *m_set2DGoalCursor=nullptr;
    QColor m_laser_color=QColor(255,0,0);
private:
    void drawLine(QPainter* painter);
    void drawImage(QPainter* painter);
    void drawPoints(QPainter* painter);
    void drawMap(QPainter* painter);
    void drawLocalCostMap(QPainter *painter);
    void drawGlobalCostMap(QPainter *painter);
    void drawRobotPose(QPainter* painter);
    void drawLaserScan(QPainter* painter);
    void drawPath(QPainter* painter);
    void drawLocalPath(QPainter* painter);
    void drawTools(QPainter* painter);
signals:
    void signalPub2DPose(QPointF,QPointF);
    void signalPub2DGoal(QPointF,QPointF);
};

#endif // ROBOITEM_H
