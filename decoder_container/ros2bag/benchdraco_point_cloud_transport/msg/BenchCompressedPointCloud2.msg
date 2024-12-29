# SPDX-License-Identifier: BSD-3-Clause
# SPDX-FileCopyrightText: Czech Technical University in Prague .. 2019, paplhjak

std_msgs/Header header

uint32 height
uint32 width

sensor_msgs/PointField[] fields

bool is_bigendian

uint32 point_step

uint32 row_step

uint8[] compressed_data

uint32 compressed_size

builtin_interfaces/Time encoding_start_timestamp

builtin_interfaces/Time encoding_finish_timestamp

builtin_interfaces/Time decoding_start_timestamp

builtin_interfaces/Time decoding_finish_timestamp

bool is_dense

# compression format used (e.g. draco, zlib, etc.)
string format