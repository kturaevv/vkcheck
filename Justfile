# Load .env file
set dotenv-load

init:
    cmake --preset default

build:
    cmake --build build

run:
    ./build/$PROJECT_NAME

compile:
    /usr/local/bin/glslc ./src/shaders/shader.vert -o ./src/shaders/vert.spv
    /usr/local/bin/glslc ./src/shaders/shader.frag -o ./src/shaders/frag.spv

bundle: init build run
rerun: build run