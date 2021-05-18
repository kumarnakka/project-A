#!/bin/bash
export EXT_LIB_DIR=`pwd`/../../../

filename=${EXT_LIB_DIR}
  parentdir=$(dirname "${filename}")
  if [ -d "${filename}" ]; then
    EXT_LIB_DIR="$(cd "${filename}" && pwd)"
  elif [ -d "${parentdir}" ]; then
    EXT_LIB_DIR="$(cd "${parentdir}" && pwd)/$(basename "${filename}")"
  fi

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${EXT_LIB_DIR}/3rd-party/driveworks
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${EXT_LIB_DIR}/3rd-party/pcl-common
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${EXT_LIB_DIR}/3rd-party/gl-libs
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:${EXT_LIB_DIR}/3rd-party/libopencv
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${EXT_LIB_DIR}/3rd-party/rti_connext_dds-6.0.1/lib/x64Linux4gcc7.3.0/
export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:${EXT_LIB_DIR}/vinai-adas-dds/vinai-adas-dds-sdk/vinai-adas-dds-pro-1.0.0/lib/x64Linux4gcc7.3.0

./visualizer
