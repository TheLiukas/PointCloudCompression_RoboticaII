#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/point_cloud2.hpp>
#include <sensor_msgs/point_cloud2_iterator.hpp>  // Include the PointCloud2Modifier header
#include <std_msgs/msg/u_int8_multi_array.hpp>    // Use UInt8MultiArray
#include <draco/compression/decode.h>
#include <draco/point_cloud/point_cloud.h>
#include <draco/core/status.h>
#include <draco/point_cloud/point_cloud.h>
#include <draco/attributes/point_attribute.h>
#include <draco/core/decoder_buffer.h>
// Your class and other code follow here...

class DracoDecoderNode : public rclcpp::Node
{
public:
    DracoDecoderNode() : Node("draco_decoder_node")
    {
        // Subscribe to the topic with compressed data
        compressed_pc_sub_ = this->create_subscription<std_msgs::msg::UInt8MultiArray>(
            "/zed/zed_node/point_cloud/cloud_registered/draco", 10,
            std::bind(&DracoDecoderNode::dracoCallback, this, std::placeholders::_1));

        // Publisher for decoded point cloud
        decoded_pc_pub_ = this->create_publisher<sensor_msgs::msg::PointCloud2>("/decoded_point_cloud", 10);
    }

private:
    void dracoCallback(const std_msgs::msg::UInt8MultiArray::SharedPtr msg)
    {
        // Decode Draco point cloud
        draco::Decoder decoder;
        draco::DecoderBuffer buffer;
        buffer.Init(reinterpret_cast<const char*>(msg->data.data()), msg->data.size());

        auto status_or_point_cloud = decoder.DecodePointCloudFromBuffer(&buffer);
        if (!status_or_point_cloud.ok()) {
            RCLCPP_ERROR(this->get_logger(), "Failed to decode Draco point cloud.");
            return;
        }

        std::unique_ptr<draco::PointCloud> pc = std::move(status_or_point_cloud).value();

        // Convert Draco point cloud to ROS 2 PointCloud2 message
        sensor_msgs::msg::PointCloud2 ros_pc2_msg;
        convertDracoToPointCloud2(pc.get(), ros_pc2_msg);

        // Publish the decoded PointCloud2 message
        decoded_pc_pub_->publish(ros_pc2_msg);
    }
	void convertDracoToPointCloud2(const draco::PointCloud *draco_pc, sensor_msgs::msg::PointCloud2 &ros_pc2_msg)
	{
	    // Set up PointCloud2 message fields
	    ros_pc2_msg.header.frame_id = "map";  // Change according to your TF frame
	    ros_pc2_msg.height = 1;  // Unorganized point cloud (1D)
	    ros_pc2_msg.is_dense = true;

	    // Get position attribute ID (usually this is the first attribute)
	    const int pos_att_id = draco_pc->GetNamedAttributeId(draco::GeometryAttribute::POSITION);
	    if (pos_att_id == -1) {
	        RCLCPP_ERROR(rclcpp::get_logger("DracoDecoder"), "No position attribute found in Draco point cloud.");
	        return;
	    }

	    // Get position attribute
	    const draco::PointAttribute *pos_att = draco_pc->attribute(pos_att_id);
	    ros_pc2_msg.width = draco_pc->num_points();  // Set width to number of points

	    // Define PointCloud2 fields for XYZ
	    sensor_msgs::PointCloud2Modifier modifier(ros_pc2_msg);
	    modifier.setPointCloud2FieldsByString(1, "xyz");
	    modifier.resize(draco_pc->num_points());  // Resize to number of points

	    // Iterate through each point in the Draco point cloud
	    sensor_msgs::PointCloud2Iterator<float> iter_x(ros_pc2_msg, "x");
	    for (draco::PointIndex i(0); i < draco_pc->num_points(); ++i) {
	        // Map PointIndex to AttributeValueIndex
	        const draco::AttributeValueIndex val_index = pos_att->mapped_index(i);

	        // Buffer to hold attribute value
	        float pos[3] = {0.0, 0.0, 0.0};

	        // Retrieve XYZ position for each point
	        pos_att->GetValue(val_index, &pos[0]);

	        // Assign the XYZ data to the ROS PointCloud2 message
	        *iter_x = pos[0];
	        ++iter_x;
	        *iter_x = pos[1];
	        ++iter_x;
	        *iter_x = pos[2];
	        ++iter_x;
	    }
	}
    rclcpp::Subscription<std_msgs::msg::UInt8MultiArray>::SharedPtr compressed_pc_sub_;
    rclcpp::Publisher<sensor_msgs::msg::PointCloud2>::SharedPtr decoded_pc_pub_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<DracoDecoderNode>());
    rclcpp::shutdown();
    return 0;
}

