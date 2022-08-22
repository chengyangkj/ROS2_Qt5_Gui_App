#ifndef roboImg_H
#define roboImg_H

#include <QCursor>
#include <QGraphicsItem>
#include <QGraphicsSceneWheelEvent>
#include <QObject>
#include <QPainter>

#include "RobotAlgorithm.h"
class roboImg : public QObject, public QGraphicsItem {
  Q_OBJECT
 public:
  roboImg();
  void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
             QWidget *widget = nullptr) override;
  QRectF boundingRect() const override;

 private:
   QPixmap m_robotImg;
   RobotPose m_currRobotPose;
public slots:
   void updatePose(RobotPose pose);
};

#endif  // roboImg_H
