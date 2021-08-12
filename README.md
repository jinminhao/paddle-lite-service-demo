# Paddle Lite Service Demo

## Drogon Installation

### OSX
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