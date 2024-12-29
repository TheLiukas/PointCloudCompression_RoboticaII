#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "benchdraco_point_cloud_interfaces/msg/bench_compressed_point_cloud2.hpp"
#include <benchdraco_point_cloud_transport/draco_subscriber.hpp>
class PointCloudDecoderNode : public rclcpp::Node {
public:
    PointCloudDecoderNode() : Node("pointcloud_decoder_node") {
        // Initialize the subscription
        subscription_ = this->create_subscription<point_cloud_interfaces::msg::CompressedPointCloud2>(
	"/zed/zed_node/mapping/fused_cloud/bench", 10,
            std::bind(&PointCloudDecoderNode::decode_callback, this, std::placeholders::_1));

        // Initialize the publisher
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("decoded_cloud", 10);
    }

private:
    // Decode callback
    void decode_callback(const point_cloud_interfaces::msg::CompressedPointCloud2::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received compressed cloud");

        sensor_msgs::msg::PointCloud2 output_msg=DracoSubscriber::decodeTyped(msg);
        RCLCPP_INFO(this->get_logger(), "Decoded point cloud successfully");
	

        publisher_->publish(output_msg);
    }
   
    // Member variables for subscription and publisher
    rclcpp::Subscription<benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2>::SharedPtr subscription_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
};






// Main function
int main(int argc, char **argv) {
    std::cout<<"starting";
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PointCloudDecoderNode>());
    rclcpp::shutdown();
    return 0;
}
