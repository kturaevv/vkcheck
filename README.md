```bash
git config submodule.extern/vcpkg.ignore all
git submodule update --init --recursive --depth 1
extern/vcpkg/bootstrap-vcpkg.sh
just init
```