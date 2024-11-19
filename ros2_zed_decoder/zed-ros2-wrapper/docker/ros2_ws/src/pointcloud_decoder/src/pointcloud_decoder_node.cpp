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
        const std::unique_ptr<draco::PointCloud> & decoded_pc = result.value();
        
        RCLCPP_INFO(this->get_logger(), "Decoded point cloud successfully");
	
        // Convert the Draco PointCloud to ROS PointCloud2 (this requires custom conversion logic)
        sensor_msgs::msg::PointCloud2 output_msg;
        convertDracoToPC2(*decoded_pc,*msg,output_msg);
        // output_msg.data="prova";
        // Conversion logic goes here to populate `output_msg` from `decoded_cloud`
        publisher_->publish(output_msg);
    }
    //! Method for converting into sensor_msgs::msg::PointCloud2
	bool convertDracoToPC2(
	  const draco::PointCloud & pc,
	  const point_cloud_interfaces::msg::CompressedPointCloud2 & compressed_PC2,
	  sensor_msgs::msg::PointCloud2 & PC2)
	{
	  // number of all attributes of point cloud
	  int32_t number_of_attributes = pc.num_attributes();

	  // number of points in pointcloud
	  draco::PointIndex::ValueType number_of_points = pc.num_points();

	  PC2.data.resize(number_of_points * compressed_PC2.point_step);

	  // for each attribute
	  for (int32_t att_id = 0; att_id < number_of_attributes; att_id++) {
	    // get attribute
	    const draco::PointAttribute * attribute = pc.attribute(att_id);

	    // check if attribute is valid
	    if (!attribute->IsValid()) {
		RCLCPP_ERROR(this->get_logger(), "In point_cloud_transport::DracoToPC2, attribute of Draco pointcloud is not valid!");
            	return false;
	    }

	    // get offset of attribute in data structure
	    uint32_t attribute_offset = compressed_PC2.fields[att_id].offset;

	    // for each point in point cloud
	    for (draco::PointIndex::ValueType point_index = 0; point_index < number_of_points;
	      point_index++)
	    {
	      // get pointer to corresponding memory in PointCloud2 data
	      uint8_t * out_data =
		&PC2.data[static_cast<int>(compressed_PC2.point_step * point_index + attribute_offset)];

	      // read value from Draco pointcloud to out_data
	      attribute->GetValue(draco::AttributeValueIndex(point_index), out_data);
	    }
	  }

	  // copy PointCloud2 description (header, width, ...)
	  copyCloudMetadata(PC2, compressed_PC2);

	  return true;
	}
	 void copyCloudMetadata(sensor_msgs::msg::PointCloud2 & target, const point_cloud_interfaces::msg::CompressedPointCloud2 & source)
	  {
	    target.header = source.header;
	    target.height = source.height;
	    target.width = source.width;
	    target.fields = source.fields;
	    target.is_bigendian = source.is_bigendian;
	    target.point_step = source.point_step;
	    target.row_step = source.row_step;
	    target.is_dense = source.is_dense;
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
