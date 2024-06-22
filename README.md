```bash
git config submodule.extern/vcpkg.ignore all
git submodule update --init --recursive --depth 1
extern/vcpkg/bootstrap-vcpkg.sh

sudo apt install libglfw3-dev
sudo apt install libglm-dev
sudo apt install vulkan-validationlayers-dev spirv-tools
sudo apt install vulkan-tools
sudo apt install libvulkan-dev
sudo apt install libxxf86vm-dev
sudo apt install libxxf86vm-dev libxi-dev

# shader compiler, put glslc in /usr/local/bin
https://github.com/google/shaderc/blob/main/downloads.md

# if GLIBCXX_3.4.32 not found
sudo add-apt-repository ppa:ubuntu-toolchain-r/test
sudo apt-get update
sudo apt-get install --only-upgrade libstdc++6

just bundle
```