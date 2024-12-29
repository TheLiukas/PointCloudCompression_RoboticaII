/*
 * Copyright (c) 2023, Czech Technical University in Prague
 * Copyright (c) 2019, paplhjak
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *    * Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *
 *    * Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *    * Neither the name of the copyright holder nor the names of its
 *      contributors may be used to endorse or promote products derived from
 *      this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef BENCHDRACO_POINT_CLOUD_TRANSPORT__DRACO_SUBSCRIBER_HPP_
#define BENCHDRACO_POINT_CLOUD_TRANSPORT__DRACO_SUBSCRIBER_HPP_

#include <draco/point_cloud/point_cloud.h>

#include <string>

//#include <point_cloud_interfaces/msg/compressed_point_cloud2.hpp>
#include <benchdraco_point_cloud_interfaces/msg/bench_compressed_point_cloud2.hpp>
#include <point_cloud_transport/simple_subscriber_plugin.hpp>
#include <point_cloud_transport/transport_hints.hpp>

namespace benchdraco_point_cloud_transport
{

class DracoSubscriber
  : public point_cloud_transport::SimpleSubscriberPlugin<
    benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2>
{
public:
  std::string getTransportName() const override;
  //std::string getTopic(const std::string & base_topic) const override;
  std::string getTopicToSubscribe(const std::string & base_topic) const override;
  void declareParameters() override;

  std::string getDataType() const override
  {
    return "benchdraco_point_cloud_transport/msg/BenchCompressedPointCloud2";
  }

  DecodeResult decodeTyped(const benchdraco_point_cloud_interfaces::msg::BenchCompressedPointCloud2 & compressed)
  const override;

  struct DracoSubscriberConfig
  {
    bool SkipDequantizationPOSITION = false;
    bool SkipDequantizationNORMAL = false;
    bool SkipDequantizationCOLOR = false;
    bool SkipDequantizationTEX_COORD = false;
    bool SkipDequantizationGENERIC = false;
  };

  DracoSubscriberConfig config_;
};
}  // namespace draco_point_cloud_transport

#endif  // BENCHDRACO_POINT_CLOUD_TRANSPORT__DRACO_SUBSCRIBER_HPP_