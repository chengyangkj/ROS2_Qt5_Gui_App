#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "rclcomm.h"
#include "roboItem.h"
#include "roboImg.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    rclcomm *commNode;
public slots:
    void onRecvData(QString);
    void updateRobotPose(RobotPose pose);
private slots:
    void on_pushButton_7_clicked();

private slots:
    void on_pushButton_6_clicked();

private slots:
    void on_pushButton_5_clicked();

private slots:
    void on_pushButton_4_clicked();

private slots:
    void on_pushButton_3_clicked();

private slots:
    void on_pushButton_2_clicked();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *m_qGraphicScene=nullptr;
    roboItem* m_roboItem=nullptr;
    roboImg *m_roboImg = nullptr;
};
#endif // MAINWINDOW_H
