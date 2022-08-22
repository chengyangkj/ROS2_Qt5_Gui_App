#include "roboImg.h"

#include "QDebug"

roboImg::roboImg() {
  setAcceptHoverEvents(true);
  setAcceptedMouseButtons(Qt::AllButtons);
  setAcceptDrops(true);
  setFlag(ItemAcceptsInputMethod, true);
  moveBy(0, 0);
  m_robotImg.load("://images/robot.png");
  QMatrix matrix;
  matrix.rotate(90);
  m_robotImg = m_robotImg.transformed(matrix, Qt::SmoothTransformation);
}
QRectF roboImg::boundingRect() const {
  return QRectF(0, 0, m_robotImg.width(), m_robotImg.height());
}

void roboImg::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
                    QWidget *widget) {
  painter->setRenderHint(QPainter::Antialiasing, true);  //设置反锯齿 反走样
  painter->save();
  painter->rotate(rad2deg(-m_currRobotPose.theta));
  painter->drawPixmap(-m_robotImg.width() / 2, -m_robotImg.height() / 2,
                      m_robotImg);
  painter->restore();
}
void roboImg::updatePose(RobotPose pose) {
  m_currRobotPose = pose;
  update();
}
