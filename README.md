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
sudo apt-get -y install git

git clone https://github.com/an-tao/drogon.git
cd drogon 
sudo ./build.sh
```
