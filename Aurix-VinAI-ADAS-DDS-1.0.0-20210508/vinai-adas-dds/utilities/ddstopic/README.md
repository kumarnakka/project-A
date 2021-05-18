# ddstopic command utility

## Introduction

`ddstopic` is a utility command for instrospecting DDS topics and messages.

SYNOPSIS:

	ddstopic list
	ddstopic echo <topic_name0,topic_name1,...,topic_nameX>

## Dependencies

- RTI Connext DDS Pro 6.0.1

## Usage

The `ddstopic` utility comes with some configuration files in the release package. Those files are mandatory for the utility to work. Those files include:

- QoS XML configuration file `USER_QOS_PROFILES.xml` : this file contains QoS configurations. It is a copy of VinAI-ADAS-DDS's `data/USER_QOS_PROFILES.xml`.
- XML type-definition files: these files are generated from the IDL files of VinAI-ADAS-DDS by using `rtiddsgen -convertToXml` command, after that they were modified manually so that all XML files are in a flat directory structure. For this release, only `LaneBoundaries`, `Trajectory`, `Trajectories` and `ControlCmd` data types are supported. The XML type-definition files are located in the `xml_types` directory. 

	**NOTE**: do not change the location of `xml_types` directory and the XML files. The directory path are currently hard-coded.

To list all topics:

    # ddstopic list

Examples:

	# ddstopic list
	/adas/sensors/eyeQ4/lane_boundaries (type: adas_dds::LaneBoundaries)
	
To echo messages published on specific topics to the terminal:

    # ddstopic echo <topic_name0,topic_name1,...,topic_nameX>

Example:

	# ddstopic echo /adas/sensors/eyeQ4/lane_boundaries
	Topic: /adas/sensors/eyeQ4/lane_boundaries, type: adas_dds::LaneBoundaries
	      header: 
	         seq: 3962580800
	         stamp: 
	            sec: 32535
	            nsec: 3962580800
	         frame_id: "body"
	      lane_boundary_list: 
	         [0]: 
	            header: 
		  ...

### Configure the peers

By default, the initial peer list in `USER_QOS_PROFILES.xml` contains only shared memory and the local host (127.0.0.1). If you need `ddstopic` to be able to discover topics and messages from other peers, please add the peer's IP address into `<initial_peers>` in `USER_QOS_PROFILES.xml`.
