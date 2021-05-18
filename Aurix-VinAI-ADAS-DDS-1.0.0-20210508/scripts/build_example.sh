#!/bin/bash
SOURCE="${BASH_SOURCE[0]}"
while [ -h "$SOURCE" ]; do # resolve $SOURCE until the file is no longer a symlink
  TARGET="$(readlink "$SOURCE")"
  if [[ $TARGET == /* ]]; then
    SOURCE="$TARGET"
  else
    DIR="$( dirname "$SOURCE" )"
    SOURCE="$DIR/$TARGET" # if $SOURCE was a relative symlink, we need to resolve it relative to the path where the symlink file was located
  fi
done

SCRIPT_DIR="$( cd -P "$( dirname "$SOURCE" )" >/dev/null 2>&1 && pwd )"
SRC_DIR=${SCRIPT_DIR}/..

PLATFORM_BUILD="";
VERSION_BUILD="";
QNX_SDK_PATH="";

if [ $# -lt 4 ]; then
    PLATFORM_BUILD=$2;
    VERSION_BUILD=$3;
    QNX_SDK_PATH=$1
    if [ $# -lt 3 ]; then
       PLATFORM_BUILD=$2;
       VERSION_BUILD="PRO";
       QNX_SDK_PATH=$1
       if [ $# -lt 2 ]; then
           PLATFORM_BUILD="QNX";
           VERSION_BUILD="PRO";
           QNX_SDK_PATH=$1
	   if [ $# -lt 1 ]; then
	       PLATFORM_BUILD="QNX";
	       VERSION_BUILD="PRO";
	       QNX_SDK_PATH="/work/disk01/DATA/SDK_NVIDIA/QNX";
	   fi
        fi	
    fi
fi

echo "Default Platform: " ${PLATFORM_BUILD}
echo "Default Version: " ${VERSION_BUILD}
echo "Default QNX SDK: " ${QNX_SDK_PATH}

echo "Input Platform: $2"

if [[ $PLATFORM_BUILD != "LINUX" && $PLATFORM_BUILD != "QNX" ]]; then
   echo "build_example.sh <QNX SDK Path> <QNX/LINUX> <PRO/MICRO>"
   echo $0 error: "We only Platform: LINUX or QNX"
   exit 1
fi

echo "Input Version: $3"

if [[ $VERSION_BUILD != "MICRO" && $VERSION_BUILD != "PRO" ]]; then
   echo "build_example.sh <QNX SDK Path> <QNX/LINUX> <PRO/MICRO>"
   echo $0 error: "We only Version: MICRO or PRO"
   exit 1
fi

BUILD_DIR=${SRC_DIR}/out/build/example_${PLATFORM_BUILD}_SHARED_${VERSION_BUILD}

if [[ ${VERSION_BUILD} == "PRO" ]]; then
  VERSION_BUILD="-DRTI_PRO=ON"
fi

if [[ ${PLATFORM_BUILD} == "QNX" ]]; then
  CMAKE_TOOLCHAIN_FILE=${SRC_DIR}/cmake/toolchains/Toolchain_DriveAGX_QNX_AARCH64.cmake
  if [[ ${QNX_SDK_PATH} == "" ]]; then
     source /work/disk01/DATA/SDK_NVIDIA/QNX/qnx700/qnxsdp-env.sh
  else
     echo "Custom setup QNX Env"
     source ${QNX_SDK_PATH}/qnx700/qnxsdp-env.sh
  fi
  PLATFORM_BUILD="-DCMAKE_TOOLCHAIN_FILE=${CMAKE_TOOLCHAIN_FILE} -DWITH_XAVIER=ON"
fi

if [[ ${QNX_SDK_PATH} != "" ]]; then
   QNX_SDK_PATH="-DNVIDIA_SDK_PATH="${QNX_SDK_PATH} 
fi

echo "Output directory: $BUILD_DIR"
echo "Platform flags: $PLATFORM_BUILD"
echo "Version flags: $VERSION_BUILD"
echo "QNX SDK flags: $QNX_SDK_PATH"

mkdir -p ${BUILD_DIR}
cd ${BUILD_DIR}
CMAKE_CMD=cmake
${CMAKE_CMD} -DCMAKE_INSTALL_PREFIX=./release ${PLATFORM_BUILD} ${QNX_SDK_PATH} ${VERSION_BUILD} ${SRC_DIR} 
make -j12
make install
