# Docker

- `zed_ros2_container` Docker container con ROS2 + ZED_WRAPPER utilizzato come producer delle nuvole punti
- `decoder_container` Docker container con ROS2 + POINT_CLOUD_TRANSPORT con REPUBLISHER per decoding e quindi consumer delle nuvole punti
- `ros2_rviz_container` Docker container con ROS2 - RVIZ per visualizzazione nuvola punti e tool di valutazione nuvola punti (CloudMapEval)

# benchdraco_point_cloud_transport

Il point_cloud_transport_plugin 'draco_point_cloud_transport' [https://github.com/ros-perception/point_cloud_transport_plugins/tree/rolling/draco_point_cloud_transport#draco-point-cloud-transport](https://) è stato forkato per aggiungere parametri di benchmarking

## benchdraco_point_cloud_interfaces

Package creato per definire il tipo di messaggio BenchCompressedPointCloud2 che estende point_cloud_interfaces/CompressedPointCloud2

[https://github.com/ros-perception/point_cloud_transport_plugins/blob/rolling/point_cloud_interfaces/msg/CompressedPointCloud2.msg](https://)

Aggiunte:

```
uint32 compressed_size

uint32 raw_size

builtin_interfaces/Time encoding_start_timestamp

builtin_interfaces/Time encoding_finish_timestamp

builtin_interfaces/Time decoding_start_timestamp

builtin_interfaces/Time decoding_finish_timestamp
```

* uint32 compressed_size numero di byte utilizzati per il messaggio compresso
* uint32 raw_size numero di byte utilizzati per la nuvola non compressa
* builtin_interfaces/Time encoding_start_timestamp timestamp per l'inizio dell'encoding
* builtin_interfaces/Time encoding_finish_timestamp timestamp per la fine dell'encoding
* builtin_interfaces/Time decoding_start_timestamp timestamp per l'inizio del decoding
* builtin_interfaces/Time decoding_finish_timestamp timestamp per la fine del decoding

## Publisher/Encoder

La funzione `DracoPublisher::encodeTyped()` è stata modificata per popolare i timestamp e calcolare il tempo di computazione dell'encoding (finish_timestamp - start_timestamp) nonchè calcolare il peso in byte della nuvola punti raw e compressa.

Inoltre è stata aggiunta la `DracoPublisher::initConfiguration()` che permette di caricare dal file yaml i parametri di compressione allo start del publisher invece di doverli cambiare solo a runtime con il dynamic reconfigure

## Subscriber/Decoder

La funzione `DracoSubscriber::decodeTyped()` è stata modificata per popolare i timestamp e calcolare il tempo di trasmissione del messaggio (decoding_start - encoding_finish) computazione del decoding (finish_timestamp - start_timestamp) e stampare a console tutti i dati di performance raccolti.
