# ADAS DDS

ADAS DDS is a DDS middleware wrapper on top of RTI DDS which includes two parts. 

The first part provides simple DDS wrapper APIs which hide low-level RTI DDS details and allows developers to quickly write DDS applications/nodes without focusin on learning RTI DDS. 

The second part is the centralized manager of IDL-based DDS messages which allows all applications/nodes to communicate, based on a single latest version of all DDS messages. 

This avoids potential issues of using inconsistent DDS messages among different teams/applications, and increases productivity.

ADAS DDS is available for Linux and QNX only and can be provided to developers in the form of SDK (share libraries and header files).

# Table of Contents
1. [Dependencies](#dependencies)
	1. [CMAKE](#cmake)
	2. [RTI DDS](#rti_dds)
2. [QNX cross compile preparation](#qnx-preparation)
3. [Example build](#build-install)
	1. [VinAI ADAS DDS Micro 1.0.0](#dds-micro)
	2. [VinAI ADAS DDS Pro 1.0.0](#dds-pro)
4. [Example release](#release)
5. [Integration](#integration)
6. [Note](#note)

# Note: The Release support QNX only.

## <a id="dependencies">1. Dependencies</a>

### <a id="cmake">1.1 CMAKE</a>

The required minimum Cmake version is <em>**3.12**</em>

### <a id="rti_dds">1.2 RTI DDS</a>

both of DDS Micro and DDS Pro (latest versions are 6.0.1 and 3.0.3 respectively) are supported.

#### Please download 3rd party [HERE](https://vingroupjsc.sharepoint.com/sites/VinAI-AutoPilot/Shared%20Documents/General/Release/Middleware/vinai-adas-dds-3rd-party-7-May-2021.tar.xz)

Extracting in Release folder, then rti dds libraries should be found in the following directories:
```
/3rd-party/rti_connext_dds-6.0.1
/3rd-party/rti_connext_dds_micro-3.0.3

```

a. RTI DDS Micro 3.0.3

You shall be able to find directory <r>armv8QNX7.0.0qcc\_gpp5.4.0</r> in /3rd-party/rti\_connext\_dds\_micro-3.0.3/lib. The directory contains the following generated libraries:

```
librti_me_appgend.so    librti_me_discdpsed.so    librti_me_rhsmd.so
librti_me_cppd.so       librti_me_netiosdmd.so    librti_me_whsmd.so
librti_me_discdpded.so  librti_me_netioshmemd.so  librti_med.so
```
b. RTI DDS Pro 6.0.1

You shall be able to find directory <r>armv8QNX7.0.0qcc\_gpp5.4.0</r> in VinAI-ADAS-DDS/3rd-party/rti\_connext\_dds-6.0.1/lib. The directory contains the following generated libraries:

```
libnddsc.so      libnddscore.so           libnddscpp.so        libnddsmetp.so
```

## <a id="qnx-preparation">2. QNX Cross Compilation Prerequistes</a>

#### To cross compile for QNX platform, the QNX SDK is required which can be downloaded from [HERE](https://vingroupjsc.sharepoint.com/sites/VinAI-AutoPilot/Shared%20Documents/General/Release/Middleware/QNX.tar.xz)

Kindly follow the instruction below:

```
1. Download cross-compiler and rootfs: QNX.tar.xz

2. Move QNX.tar.xz to a folder. Example: /work/disk01/DATA/SDK_NVIDIA

3. tar xvf QNX.tar.xz

```

After extraction, we will get SDK and sysroot. Example:

```
QNX SDK: /work/disk01/DATA/SDK_NVIDIA/QNX/qnx700

QNX Sysroot: /work/disk01/DATA/SDK_NVIDIA/QNX/rootfs 
```

<r>Note: If you dont follow example directory, you can input by cmake command with $NVIDIA_SDK_PATH</r>

Reference:

```
${NVIDIA_SDK_PATH} in cmake/toolchains/Toolchain_DriveAGX_QNX_AARCH64.cmake

```

## <a id="build-install">3. Example build</a>

### <a id="dds-micro">3.1 VinAI ADAS DDS Micro 1.0.0</a>

Build for QNX - Ensure that you have already read <a class="anchor" href="#qnx-preparation">THIS NOTE </a>:

```
cd VinAI-ADAS-DDS

./scripts/build_example.sh /work/disk01/DATA/SDK_NVIDIA/QNX QNX MICRO

```
Output: 
```
/out/build/example_QNX_SHARED_MICRO/example: 

camera_image/camera_pub_example        camera_image/camera_sub_example

helloworld/helloworld_pub              helloworld/helloworld_sub

```
### <a id="dds-pro">3.2 VinAI ADAS DDS Pro 1.0.0</a>

Build for QNX - Ensure that you have already read <a class="anchor" href="#qnx-preparation"> THIS NOTE </a>:

```
./scripts/build_example.sh /work/disk01/DATA/SDK_NVIDIA/QNX QNX PRO
```
Output: 
```
/out/build/example_QNX_SHARED_PRO/example: 

camera_image/camera_pub_example        camera_image/camera_sub_example

helloworld/helloworld_pub              helloworld/helloworld_sub
```

## <a id="release">4. Example release</a>

Afer we build successfully with the above script, released folder will be following:

```
RIT Micro 3.0.3 for QNX = /out/build/example_QNX_SHARED_MICRO/release

RIT Pro 6.0.1 for QNX = /out/build/example_QNX_SHARED_PRO/release
```
<r>P/s: We should copy configs/USER_QOS_PROFILES.xml to same path when we try to run examples. </r>

## <a id="integration">5. Integration</a>

### ADAS DDS APIs

Basic integration:

```
1. Init Node handle

2. Choose topic string and data type

3. Publisher: Node handle call 'advertise' with inputs: topic and data type. 

4. Publish data: Publish call 'publish' with input: data msg

5. Subscriber: Node handle call 'subscribe' with inputs: topic, data type and callback. 

6. Subscribe data: Listen callback to process data.
```

Detail example:

```
Please refer to the helloworld example code located at:
'src/adas/dds/examples/helloworld' for the usage of ADAS DDS APIs.


More advance with "large data and shmem":
Pls refer to the camera example code located at:
'src/adas/dds/examples/camera_image' for the usage of ADAS DDS APIs.
```

#### Currently, we provide a list of data type headers. We can reference at 
```
vinai-adas-dds-micro-1.0.0/include/adas/dds/idl/adas
vinai-adas-dds-pro-1.0.0/include/adas/dds/idl/adas
```

## <a id="note">6.Note</a>

To use ADAS DDS SDK in your project, please install the sdk in a specific folder and create FindADAS\_DDS.cmake, so that libvinai\_adas\_dds.so and libvinai\_adas\_dds\_idl.so can be linked with your applications/nodes.
