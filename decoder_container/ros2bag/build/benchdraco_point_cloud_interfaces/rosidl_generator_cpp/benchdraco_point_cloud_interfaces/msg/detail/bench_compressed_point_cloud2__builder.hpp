// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from benchdraco_point_cloud_interfaces:msg/BenchCompressedPointCloud2.idl
// generated code does not contain a copyright notice

#ifndef BENCHDRACO_POINT_CLOUD_INTERFACES__MSG__DETAIL__BENCH_COMPRESSED_POINT_CLOUD2__BUILDER_HPP_
#define BENCHDRACO_POINT_CLOUD_INTERFACES__MSG__DETAIL__BENCH_COMPRESSED_POINT_CLOUD2__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "benchdraco_point_cloud_interfaces/msg/detail/bench_compressed_point_cloud2__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace benchdraco_point_cloud_interfaces
{

namespace msg
{

namespace builder
{

class Init_BenchCompressedPointCloud2_format
{
public:
  explicit Init_BenchCompressedPointCloud2_format(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 format(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_format_type arg)
  {
    msg_.format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_is_dense
{
public:
  explicit Init_BenchCompressedPointCloud2_is_dense(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_format is_dense(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_is_dense_type arg)
  {
    msg_.is_dense = std::move(arg);
    return Init_BenchCompressedPointCloud2_format(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_decoding_finish_timestamp
{
public:
  explicit Init_BenchCompressedPointCloud2_decoding_finish_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_is_dense decoding_finish_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_decoding_finish_timestamp_type arg)
  {
    msg_.decoding_finish_timestamp = std::move(arg);
    return Init_BenchCompressedPointCloud2_is_dense(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_decoding_start_timestamp
{
public:
  explicit Init_BenchCompressedPointCloud2_decoding_start_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_decoding_finish_timestamp decoding_start_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_decoding_start_timestamp_type arg)
  {
    msg_.decoding_start_timestamp = std::move(arg);
    return Init_BenchCompressedPointCloud2_decoding_finish_timestamp(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_encoding_finish_timestamp
{
public:
  explicit Init_BenchCompressedPointCloud2_encoding_finish_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_decoding_start_timestamp encoding_finish_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_encoding_finish_timestamp_type arg)
  {
    msg_.encoding_finish_timestamp = std::move(arg);
    return Init_BenchCompressedPointCloud2_decoding_start_timestamp(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_encoding_start_timestamp
{
public:
  explicit Init_BenchCompressedPointCloud2_encoding_start_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_encoding_finish_timestamp encoding_start_timestamp(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_encoding_start_timestamp_type arg)
  {
    msg_.encoding_start_timestamp = std::move(arg);
    return Init_BenchCompressedPointCloud2_encoding_finish_timestamp(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_raw_size
{
public:
  explicit Init_BenchCompressedPointCloud2_raw_size(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_encoding_start_timestamp raw_size(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_raw_size_type arg)
  {
    msg_.raw_size = std::move(arg);
    return Init_BenchCompressedPointCloud2_encoding_start_timestamp(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_compressed_size
{
public:
  explicit Init_BenchCompressedPointCloud2_compressed_size(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_raw_size compressed_size(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_compressed_size_type arg)
  {
    msg_.compressed_size = std::move(arg);
    return Init_BenchCompressedPointCloud2_raw_size(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_compressed_data
{
public:
  explicit Init_BenchCompressedPointCloud2_compressed_data(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_compressed_size compressed_data(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_compressed_data_type arg)
  {
    msg_.compressed_data = std::move(arg);
    return Init_BenchCompressedPointCloud2_compressed_size(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_row_step
{
public:
  explicit Init_BenchCompressedPointCloud2_row_step(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_compressed_data row_step(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_row_step_type arg)
  {
    msg_.row_step = std::move(arg);
    return Init_BenchCompressedPointCloud2_compressed_data(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_point_step
{
public:
  explicit Init_BenchCompressedPointCloud2_point_step(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_row_step point_step(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_point_step_type arg)
  {
    msg_.point_step = std::move(arg);
    return Init_BenchCompressedPointCloud2_row_step(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_is_bigendian
{
public:
  explicit Init_BenchCompressedPointCloud2_is_bigendian(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_point_step is_bigendian(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_is_bigendian_type arg)
  {
    msg_.is_bigendian = std::move(arg);
    return Init_BenchCompressedPointCloud2_point_step(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_fields
{
public:
  explicit Init_BenchCompressedPointCloud2_fields(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_is_bigendian fields(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_fields_type arg)
  {
    msg_.fields = std::move(arg);
    return Init_BenchCompressedPointCloud2_is_bigendian(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_width
{
public:
  explicit Init_BenchCompressedPointCloud2_width(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_fields width(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_BenchCompressedPointCloud2_fields(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_height
{
public:
  explicit Init_BenchCompressedPointCloud2_height(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & msg)
  : msg_(msg)
  {}
  Init_BenchCompressedPointCloud2_width height(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_BenchCompressedPointCloud2_width(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

class Init_BenchCompressedPointCloud2_header
{
public:
  Init_BenchCompressedPointCloud2_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BenchCompressedPointCloud2_height header(::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_BenchCompressedPointCloud2_height(msg_);
  }

private:
  ::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2>()
{
  return benchdraco_point_cloud_interfaces::msg::builder::Init_BenchCompressedPointCloud2_header();
}

}  // namespace benchdraco_point_cloud_interfaces

#endif  // BENCHDRACO_POINT_CLOUD_INTERFACES__MSG__DETAIL__BENCH_COMPRESSED_POINT_CLOUD2__BUILDER_HPP_
