## ros2bag_to_pcd

Fork di [https://github.com/xmfcx/rosbag2_to_pcd.git](https://github.com/xmfcx/rosbag2_to_pcd.git)

Converte le ros bag contenenti messi sensor_msgs/PointCloud2 in file .PCD per la comparazione

`ros2bag_to_pcd.sh <path bag> <nome nodo>`

Esempio:

`ros2bag_to_pcd.sh /root/ros2_ws/ros2bag/0412/raw /zed/zed_node/mapping/fused_cloud`

`ros2bag_to_pcd.sh /root/ros2_ws/ros2bag/0412/decoded /decoded_cloud`

## Cloud_Map_Evaluation

Fork di [`https://github.com/JokerJohn/Cloud_Map_Evaluation.git`](`https://github.com/JokerJohn/Cloud_Map_Evaluation.git`)

Effettua calcoli di indici di discostamento fra la mappa raw

`cloud_map_evaluation.sh <path> <raw.pcd> <decoded.pcd>`

⚠️ <path> deve contenere tutti e due i file pcd e i nomi dei due non deve contenere percorsi ⚠️

Esempio
`cloud_map_evaluation.sh /root/ros2_ws/ros2bag/0412/pcd raw.pcd decoded.pcd`
