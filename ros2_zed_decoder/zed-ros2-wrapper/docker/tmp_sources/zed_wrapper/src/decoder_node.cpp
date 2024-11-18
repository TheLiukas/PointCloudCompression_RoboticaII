#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include "draco/compression/decode.h"

class DecoderNode : public rclcpp::Node {
public:
    DecoderNode() : Node("decoder_node") {
        subscriber_ = this->create_subscription<sensor_msgs::msg::PointCloud2>(
            "compressed_pointcloud", 10,
            std::bind(&DecoderNode::decode_callback, this, std::placeholders::_1));
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("decoded_pointcloud", 10);
    }

private:
    void decode_callback(const sensor_msgs::msg::PointCloud2::SharedPtr msg) {
        // Decode using Draco
        std::vector<char> compressed_data(msg->data.begin(), msg->data.end());
        draco::Decoder decoder;
        auto buffer = std::make_unique<draco::DecoderBuffer>();
        buffer->Init(compressed_data.data(), compressed_data.size());

        auto point_cloud = decoder.DecodePointCloudFromBuffer(buffer.get());
        if (!point_cloud.ok()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to decode point cloud.");
            return;
        }

        // Convert decoded Draco point cloud back to ROS PointCloud2
        sensor_msgs::msg::PointCloud2 decoded_msg;
        // Populate decoded_msg fields with `point_cloud` data.
        // (This requires mapping the Draco point cloud format to ROS PointCloud2)

        publisher_->publish(decoded_msg);
    }

    rclcpp::Subscription<sensor_msgs::msg::PointCloud2>::SharedPtr subscriber_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr publisher_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DecoderNode>());
    rclcpp::shutdown();
    return 0;
}
