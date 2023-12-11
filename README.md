<!--
 * @Author: chengyangkj chengyangkj@qq.com
 * @Date: 2023-09-02 07:23:43
 * @LastEditors: chengyangkj chengyangkj@qq.com
 * @LastEditTime: 2023-10-06 14:03:03
 * @FilePath: /ROS2_Qt5_Gui_App/README.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%B
-->
# ROS2 Qt5 Gui App
## 轻量级ROS人机交互软件

![image.png](./doc/images/main.png)

# Environment Install

```
sudo apt-get install qtbase5-private-dev



```

# Build And Run

## 1,Use CMAKE

```

git clone https://github.com/chengyangkj/ROS2_Qt5_Gui_App.git
cd ROS2_Qt5_Gui_App
mkdir build
cd build
cmake ..
make

```

run:

```
./ros_qt5_gui_app

```

## 2,Use colcon Build

create ros2 workspace

```

mkdir -p ~/ros2_ws/src


```

clone rep and build

```
cd ~/ros2_ws/src
git clone https://github.com/chengyangkj/ROS2_Qt5_Gui_App.git
cd ~/ros2_ws/
colcon build


```

run:

```
source ~/ros2_ws/install/setup.bash
ros2 run ros_qt5_gui_app ros_qt5_gui_app
```