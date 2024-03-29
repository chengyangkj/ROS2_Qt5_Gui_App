
#include "display/factory_display.h"
#include "display/display_manager.h";
#include "logger/logger.h"
namespace Display {

bool FactoryDisplay::Init(QGraphicsView *viewer) {
  if (!initlizated_) {
    initlizated_ = true;
    scene_ptr_ = new QGraphicsScene();
    viewer_ptr_ = viewer;
    viewer_ptr_->setScene(scene_ptr_);
    viewer_ptr_->setViewportUpdateMode(QGraphicsView::FullViewportUpdate);
    run_flag_ = true;
    connect(&timer_coordinate_system_, SIGNAL(timeout()), this,
            SLOT(Process()));
    timer_coordinate_system_.setInterval(10);
    timer_coordinate_system_.start();
    return true;
  }
  return false;
}
FactoryDisplay::FactoryDisplay() {}
FactoryDisplay::~FactoryDisplay() { run_flag_ = false; }
// 获取图层
VirtualDisplay *FactoryDisplay::GetDisplay(const std::string &display_name) {
  if (total_display_map_.count(display_name) != 0) {
    return total_display_map_[display_name];
  }
  return nullptr;
}
// 设置图层的scene坐标
bool FactoryDisplay::SetDisplayScenePose(const std::string &display_name,
                                         const QPointF &pose) {
  VirtualDisplay *display = GetDisplay(display_name);
  if (display == nullptr)
    return false;
  display->setPos(pose);
  return true;
}
// 设置图层的scene坐标
bool FactoryDisplay::SetDisplayPoseInParent(const std::string &display_name,
                                            const RobotPose &pose) {
  VirtualDisplay *display = GetDisplay(display_name);
  if (display == nullptr)
    return false;
  display->SetPoseInParent(pose);
  return true;
}
// 设置图层放大缩小
bool FactoryDisplay::SetDisplayScaled(const std::string &display_name,
                                      const double &value) {
  VirtualDisplay *display = GetDisplay(display_name);
  if (display == nullptr)
    return false;
  display->SetScaled(value);
  return true;
}
void FactoryDisplay::AddDisplay(VirtualDisplay *display,
                                const std::string &parent_name) {
  if (total_display_map_.count(display->GetDisplayName()) != 0)
    return;
  // add group
  if (!parent_name.empty()) {
    auto parent_ptr = GetDisplay(parent_name);
    parent_ptr->AddChild(display);
    // display->setParent(parent_ptr);
  }
  total_display_map_[display->GetDisplayName()] = display;

  scene_ptr_->addItem(display);
}
void FactoryDisplay::FocusDisplay(const std::string &display_name) {

  focus_display_name_ = display_name;
}
void FactoryDisplay::RemoveDisplay(const std::string &name) {
  auto iter = total_display_map_.find(name);
  if (iter != total_display_map_.end()) {
    delete iter->second;
    total_display_map_.erase(iter);
  }
  iter = total_display_map_.find(name);
  if (iter != total_display_map_.end()) {
    delete iter->second;
    total_display_map_.erase(iter);
  }
}
int FactoryDisplay::GetDisplaySize() { return total_display_map_.size(); }
std::map<std::string, VirtualDisplay *> FactoryDisplay::GetTotalDisplayMap() {
  return total_display_map_;
}
// 设置响应鼠标事件的图层
bool FactoryDisplay::SetMoveEnable(const std::string &display_name,
                                   bool enable) {
  if (total_display_map_.count(display_name) != 0) {
    total_display_map_[display_name]->SetMoveEnable(enable);
    return true;
  }
  return false;
}
bool FactoryDisplay::GetMoveEnable(const std::string &display_name) {
  if (total_display_map_.count(display_name) != 0) {
    return total_display_map_[display_name]->GetMoveEnable();
  }
  return false;
}
/**
 *
 * @description: 更新图层间的坐标系关系
 * @return {*}
 */
void FactoryDisplay::Process() {
  // focus on
  auto display = GetDisplay(focus_display_name_);
  if (display != nullptr) {
    viewer_ptr_->centerOn(display);
  }
}
} // namespace Display