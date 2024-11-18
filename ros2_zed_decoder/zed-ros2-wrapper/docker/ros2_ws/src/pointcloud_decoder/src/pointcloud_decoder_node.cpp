#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/point_cloud2.hpp"
#include <draco/compression/decode.h>
#include <draco/point_cloud/point_cloud.h>
#include "point_cloud_interfaces/msg/compressed_point_cloud2.hpp"

class PointCloudDecoderNode : public rclcpp::Node {
public:
    PointCloudDecoderNode() : Node("pointcloud_decoder_node") {
        // Initialize the subscription
        subscription_ = this->create_subscription<point_cloud_interfaces::msg::CompressedPointCloud2>(
            "/zed/zed_node/point_cloud/cloud_registered/draco", 10,
            std::bind(&PointCloudDecoderNode::decode_callback, this, std::placeholders::_1));

        // Initialize the publisher
        publisher_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("decoded_cloud", 10);
    }

private:
    // Decode callback
    void decode_callback(const point_cloud_interfaces::msg::CompressedPointCloud2::SharedPtr msg) {
        RCLCPP_INFO(this->get_logger(), "Received compressed cloud");

        // Decode using Draco
        draco::Decoder decoder;
        draco::DecoderBuffer buffer;

        // Initialize the buffer with the compressed data
        buffer.Init(reinterpret_cast<const char *>(msg->compressed_data.data()), msg->compressed_data.size());

        // Call the decoder
        auto result = decoder.DecodePointCloudFromBuffer(&buffer);
        if (!result.ok()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to decode point cloud: %s", result.status().error_msg());
            return;
        }

        // Extract the decoded point cloud
        std::unique_ptr<draco::PointCloud> decoded_cloud = std::move(result).value();
        RCLCPP_INFO(this->get_logger(), "Decoded point cloud successfully");

        // Convert the Draco PointCloud to ROS PointCloud2 (this requires custom conversion logic)
        sensor_msgs::msg::PointCloud2 output_msg;
        // output_msg.data="prova";
        // Conversion logic goes here to populate `output_msg` from `decoded_cloud`
        publisher_->publish(output_msg);
    }

    // Member variables for subscription and publisher
    rclcpp::Subscription<point_cloud_interfaces::msg::CompressedPointCloud2>::SharedPtr subscription_;
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
