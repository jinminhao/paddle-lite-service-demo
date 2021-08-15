# Paddle Lite Service Demo

## Overview

This service demo is based on [paddle-lite object detection](https://github.com/PaddlePaddle/Paddle-Lite-Demo/tree/master/PaddleLite-armlinux-demo/object_detection_demo). Drogon is used as the web application framework.

## Drogon Installation

### OSX
You can try using drogon on Mac OS. The following commands are for drogon installation on OSX.
``` bash
brew install cmake
brew install c-ares
brew install jsoncpp
brew install ossp-uuid
git clone https://github.com/an-tao/drogon
cd drogon
./build.sh
```

### ARMLinux
The installation of drogon on Raspberry Pi or other ARMLiux devices are as follows
``` bash
apt-get update
apt-get -y install sudo
sudo apt-get -y install g++
sudo apt-get -y install cmake
sudo apt-get -y install libssl-dev
sudo apt-get -y install libc-ares-dev
sudo apt-get -y install libjsoncpp-dev
sudo apt-get -y install uuid-dev
sudo apt-get -y install zlib1g-dev
sudo apt-get -y install libgmp3-dev
sudo apt-get -y isntall libcurl4-gnutls-dev
sudo apt-get -y install git

git clone https://github.com/an-tao/drogon.git
cd drogon 
sudo ./build.sh
```

## Server Installtion and Test
Server:
``` bash
cd service-demo
mkdir build && cd build
cmake ..
make
./demo
```

Client:
``` bash
curl -H "Content-Type: application/json" -X POST -d '{"url": "xxxx"}' http://0.0.0.0:8080
```
