# minimal_target_ros1_link
プログラムを作成しビルド，実行するまでのテスト

## install 
```
mkdir -p ros2_ws/src
cd ros2_ws/src
git clone https://github.com/Ryusei-Baba/minimal_target_ros1_link.git
cd ~/ros2_ws/
colcon build --symlink-install
. install/local_setup.bash
```
## run
```
ros2 run minimal_target_ros1_like minimal_target_ros1_like_test
```