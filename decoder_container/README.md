# Decoding

## point_cloud_transport

Questa repo contiene una fork di [https://github.com/ros-perception/point_cloud_transport.git](https://)

La fork è necessaria per una modifica in [https://github.com/ros-perception/point_cloud_transport/blob/rolling/point_cloud_transport/src/republish.cpp#L157](https://)

`157: in_topic, static_cast<uint32_t>(1),`

è stato modificato in 

`157: in_topic, static_cast<uint32_t>(100),`

per permettere al subscriber che legge i messaggi encoded, li decomprime e li ripubblica di avere una queue di 100 messaggi in entrata, in modo tale da non perdere messaggi.

### Republisher

Per la decompressione viene utilizzato il republisher (modificato) fornito da point_cloud_transport.

Comando (fare riferimento a: [https://github.com/ros-perception/point_cloud_transport/tree/rolling?tab=readme-ov-file#republish-rclcpp-component](https://))

```shell
ros2 run point_cloud_transport republish --ros-args -p in_transport:=bench -p out_transport:=raw --ros-args -r __node:=point_cloud_republisher --remap in/bench:=/zed/zed_node/mapping/fused_cloud/bench --remap out:=/rawout
```

* in_transport nome del plugin utilizzato per l'encoding
* out_transport nome del plugin del messaggio in uscita (raw per ottenere messaggio decoded in PointCloud2 ma anche altri plugin per conversione decoded)
* __node nome del nodo per ripubblicare il messaggio di output
* in/<plugin_name> nome del topic da cui il subscriber deve ottenere i messaggi compressi
* out nome del topic sotto il nodo __node dove vengono ripubblicati i messaggi decodificati
