:warning:Deve esistere la cartella zed_catture in questa cartella con sottocartelle loseless e lossy che contengono gli svo2.:warning:

## Zed Wrapper

Per far partire il wrapper

`ros2 launch zed_wrapper zed_camera.launch.py camera_model:=zed2i svo_path:=./zed_catture/lossy/HD720.svo2`

## Parametri di encoding

Il file config.yaml per la configurazione dei parametri di encoding contiene:

```
---
encode_speed: 10
decode_speed: 7
encode_method: 1
deduplicate: true
force_quantization: true
quantization_POSITION: 14
quantization_NORMAL: 14
quantization_COLOR: 14
quantization_TEX_COORD: 14
quantization_GENERIC: 14
expert_quantization: true
expert_attribute_types: true
mapping_quantization_bits_x: 14
mapping_quantization_bits_y: 14
mapping_quantization_bits_z: 14
mapping_quantization_bits_rgb: 14
mapping_rgba_tweak_rgb: true
mapping_rgba_tweak_rgba: false
...
```

Per informazioni sui parametri [https://github.com/ros-perception/point_cloud_transport_plugins/blob/rolling/draco_point_cloud_transport/README.md](https://)

Questi e gli altri parametri esclusi possono essere cambiati a runtime con ros params:

> To set a quantization for a PointField entry "x" of point cloud which will be advertised on base topic *base\_topic*, one must set the parameter: /base\_topic/draco/attribute\_mapping/quantization\_bits/x.
>
> Example:
>
> ```shell
> ros2 param set <node name> /<base_topic>/draco/attribute_mapping/quantization_bits/x 16
> ```

:warning: Il file "config.yaml" deve essere in /root/ros2_ws/ :warning:
