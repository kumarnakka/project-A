# ddslaunch command utility

## Introduction

`ddslaunch` is a utility for launching nodes (executable binaries) from a YAML configuration file.

## Usage

	ddslaunch <config_file>

You must specify a YAML file which specifies the nodes (executable binaries) to be launched along with arguments for each of them.

Below is an example `demo.yaml` file, which is configured for launching perception, lane fusion and control nodes:

```yaml
params:
  prefix: /work
nodes:
  - name: Camera Node
    executable: gmsl_camera_pub
    path: $prefix/camera/adas-dds-pro/adas_dds-1.0.0-armv8QNX7.0.0qcc_gpp5.4.0/bin
    args:
  - name: Perception Subnodes
    executable: PerceptionSubnodes
    path: $prefix/perception
    args:
      - /work/perception/configs/subnodes/subnodes_config.yaml
  - name: Fusion Node
    executable: lane_fusion_release
    path: $prefix/lane_fusion
    args:
  - name: motion planner input
    executable: motion_planner_input_interfaces
    path: $prefix/control
    args:
  - name: motion planner output
    executable: motion_planner_output_interfaces
    path: $prefix/control
    arg:
  - name: local planner
    executable: local_planner
    path: $prefix/control
    arg:
```

This `demo.yaml` file then is used to launch the configured nodes:

	ddslaunch demo.yaml

Explanation for configuration parameters:

- `prefix` : if used, it is the path will prefix the path to executable binary.
- `nodes` : list of nodes to be launched. Each node contains:
	- `name` : Human readable name of a node.
	- `executable` : name of the executable binary that will be executed for this node.
	- `path` : normally prefix with `$prefix`, however any correct path will work. This is the path to the directory containing the `executable`.
	- `args` : arrays of command line arguments for the executable.

For example, for the perception node in `demo.yaml`:
  - Its name is `Perception Subnodes`.
  - The executable binary file name is `PerceptionSubnodes`.
  - The directory contaning the `PerceptionSubnodes` binary is `/work/perception`.
  - And there is only 1 argument to this node, which is the path to its configuration file `/work/perception/configs/subnodes/subnodes_config.yaml`.

  In result, the perception node will be launched as if we run the command:

    /work/perception/PerceptionSubnodes /work/perception/configs/subnodes/subnodes_config.yaml

