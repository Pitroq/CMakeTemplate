git clone https://github.com/Pitroq/CMakeTemplate
git submodule init
git submodule update
mkdir build
cmake -G "Ninja" -B build
cd build
ninja