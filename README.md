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

just bundle
```