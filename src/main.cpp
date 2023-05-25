#include <rclcpp/rclcpp.hpp>

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("minimal_target_ros1_link_test");
    RCLCPP_INFO(node->get_logger(),"minimal_target_ros1_like test's output.");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}