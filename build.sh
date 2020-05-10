#!/bin/bash
TYPE=release
CMAKE=cmake3
if [ $# -gt 0 ]; then
	TYPE=$1
fi
if [[ $TYPE != "debug" && $TYPE != "release" ]]; then
	echo "error param! please input 'debug' or 'release'."
	exit -1
fi
WORKING_DIR=$(cd `dirname $0`; pwd)
SRC_DIR=$WORKING_DIR
BUILD_RELEASE_DIR=bin/$WORKING_DIR/$TYPE
if [ ! -d $BUILD_RELEASE_DIR ]; then
	mkdir -p $BUILD_RELEASE_DIR
fi
cd $BUILD_RELEASE_DIR
$CMAKE $SRC_DIR -DCMAKE_BUILD_TYPE=$TYPE
make
