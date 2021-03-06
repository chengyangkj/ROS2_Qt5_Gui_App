#ifndef RCLCOMM_H
#define RCLCOMM_H

#include <QObject>
#include <QThread>
#include <rclcpp/rclcpp.hpp>
#include <QDebug>
#include <QImage>
#include "std_msgs/msg/int32.hpp"
#include "nav_msgs/msg/occupancy_grid.hpp"
#include "tf2/LinearMath/Quaternion.h"
#include "tf2_ros/transform_listener.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "nav_msgs/msg/path.hpp"
#include "sensor_msgs/msg/laser_scan.hpp"
#include "RobotAlgorithm.h"
class rclcomm :public QThread
{
     Q_OBJECT
public:
    rclcomm();
    void run() override;
    QPointF transWordPoint2Scene(QPointF point);
    QPointF transScenePoint2Word(QPointF point);
private:
    void recv_callback(const std_msgs::msg::Int32::SharedPtr msg);
    void map_callback(const nav_msgs::msg::OccupancyGrid::SharedPtr msg);
    void laser_callback(const sensor_msgs::msg::LaserScan::SharedPtr msg);
    void path_callback(const nav_msgs::msg::Path::SharedPtr msg);
    QImage rotateMapWithY(QImage map);
    void getRobotPose();

private:
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr _publisher;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr _subscription;
    rclcpp::Subscription<nav_msgs::msg::OccupancyGrid>::SharedPtr _map_sub;
    rclcpp::Subscription<sensor_msgs::msg::LaserScan>::SharedPtr _laser_sub;
    rclcpp::Subscription<nav_msgs::msg::Path>::SharedPtr _path_sub;
    std::unique_ptr<tf2_ros::Buffer> m_tf_buffer;
    std::shared_ptr<tf2_ros::TransformListener> m_transform_listener;
    std::shared_ptr<rclcpp::Node> node;
    QPointF m_wordOrigin;
    double m_resolution;
    RobotPose m_currPose;
    rclcpp::executors::MultiThreadedExecutor *m_executor;
    rclcpp::CallbackGroup::SharedPtr callback_group_laser;
    rclcpp::CallbackGroup::SharedPtr callback_group_other;
signals:
    void emitTopicData(QString);
    void emitUpdateMap(QImage img);
    void emitUpdateRobotPose(RobotPose pose);
    void emitUpdateLaserPoint(QPolygonF points);
    void emitUpdatePath(QPolygonF points);
};

#endif // RCLCOMM_H
